#include <iostream>

using namespace std;

//自底向上的非递归

void MatrixChain(int p[], int n, int **m, int **s)

{

    int t, j;

    for (int i = 1; i <= n; i++)

       m[i][i] = 0;

    for (int r = 2; r <= n; r++)

    {

       for (int i = 1; i <= n - r + 1; i++)

       {

           j = i + r - 1;

           m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];

           s[i][j] = i;

           for (int k = i + 1; k < j; k++)

           {

              t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];

              if (t < m[i][j])

              {

                  m[i][j] = t;

                  s[i][j] = k;

 

              }

           }

       }

 

 

    }

}

 

void print(int i, int j, int **s)

{

 

    if (i == j)

       cout << 'A' << i;

    else {

       cout << '(';

       print(i, s[i][j], s);

       print(s[i][j] + 1, j, s);

       cout << ')';

    }

 

 

}

int main()

{

 

    int n, **s, **m, j = 1;

    cin >> n;

    int *p = new int[n + 1];

    s = new int *[n + 1];

    for (int i = 0; i <= n; i++)

       s[i] = new int[n + 1];

    m = new int *[n + 1];

    for (int i = 0; i <= n; i++)

       m[i] = new int[n + 1];

    for (int i = 0; i <= n; i++)

       cin >> p[i];

    MatrixChain(p, n, m, s);

    print(1, n, s);

    cout << endl;

    delete s, m, p;

    return 0;

}
