#include<iostream>

using namespace std;

static int root;

void OptimalBinarySearchTree(double *a, double *b, int n, double **m, int **s, double **w)

{

    for (int i = 0; i <= n; i++)//初始化

    {

      

       w[i + 1][i] = a[i];

       m[i + 1][i] = 0;

    }

    for (int r = 0; r < n; r++)

    {

       for (int i = 1; i <= n - r; i++)//i 为起始元素下标

       {

           int j = i + r;//j 为终止元素下标

           w[i][j] = w[i][j - 1] + a[j] + b[j];

           m[i][j] = m[i + 1][j];

           s[i][j] = i;

 

 

 

           for (int k = i + 1; k <= j; k++)//取第k个节点作根

           {

              double t = m[i][k -1] + m[k + 1][j];

              if (t < m[i][j])

              {

                  m[i][j] = t;

                  s[i][j] = k;//根节点元素

              }

 

             

           }

           m[i][j] += w[i][j];

       }

 

    }

}

 

void prin(int n,int i,int j,int **s,int f,char ch)

{

    int  k = s[i][j];

    if (k > 0)

    {

       if (f == 0)

       {

           cout << "S" << k << "是根"<<endl;

           root= k;

      

       }

       else

       {

           //子树

           if (f != root)

           {

              cout << "S" << f << "是根" << endl;

              root = f;

           }

           if (ch=='L')

              cout << "S" << f<< "的左孩子是" << "S" << k << endl;

           else if (ch=='R')

              cout << "S" << f<< "的右孩子是" << "S" << k<< endl;

   

 

       }

       int t = k - 1;

       if (t >= i&&t <= n)

           prin(n,i,t,s,k,'L');//回溯左子树

       t = k + 1;

       if (t <= j)

           prin(n,t,j,s,k,'R');//回溯右子树

    }

 

}

 

int main()

{

    int n;

    cin >> n;

    double *b = new double[n + 1];//成功的概率

    double *a = new double[n + 1];//失败的概率

    double **m = new double*[n + 2];

    int **s=new int *[n+2];

    double **w=new double*[n+2];

    for (int i = 0; i <= n+1; i++)

    {

       m[i] = new double[n + 2];

       s[i] = new int[n + 2];

       w[i] = new double[n + 2];

    }

   

    for (int i = 1; i <= n; i++)

       cin >> b[i];

    for (int i = 0; i <= n; i++)

       cin >> a[i];

    for (int i = 0; i <= n + 1; i++)

    {

       for (int j = 0; j <= n+1; j++)

       {

           m[i][j] = -1;

           s[i][j] = -1;

           w[i][j] = -1;

       }

    }

    OptimalBinarySearchTree(a,b,n,m,s,w);

 

 

    prin(n,1,n,s,0,'O');

    for (int i = 0; i<n + 2; i++)

    {

       delete m[i];

       delete s[i];

       delete w[i];

    }

    delete[] m;

    delete[] s;

    delete[] w;

    return 0;

}

 
