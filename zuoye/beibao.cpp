#include<iostream>

#include<algorithm>

using namespace std;

void Knapsack(int *v, int *w, int c, int n, int **m)

{

    int jMax = min(w[n] - 1, c);

    for (int j = 1; j <= jMax; j++)//初始化m[n][j]

       m[n][j] = 0;

    for (int j = w[n]; j <= c; j++)

       m[n][j] = v[n];

    for (int i = n - 1; i > 1; i--)

    {

       jMax = min(w[i] - 1, c);

       for (int j = 1; j <= jMax; j++)

           m[i][j] = m[i + 1][j];

       for (int j = w[i]; j <= c; j++)

       if (j - w[i] != 0)

           m[i][j] = max(m[i + 1][j], m[i + 1][j - w[i]] + v[i]);

       else

           m[i][j] = max(m[i + 1][j], m[i + 1][j - w[i] + 1] + v[i]);

 

    }

    m[1][c] = m[2][c];

    if (c >= w[1])

       m[1][c] = max(m[1][c], m[2][c - w[1]] + v[1]);

 

}

 

void Traceback(int **m, int *w, int c, int n, int *x)

{

    for (int i = 1; i < n; i++)

    {

       if (m[i][c] == m[i + 1][c])

           x[i] = 0;

       else{

           x[i] = 1;

           c -= w[i];

 

       }

    }

    x[n] = m[n][c] ? 1 : 0;

 

}

void prin(int *x, int n)

{

    cout << '(';

    cout << x[1];

    for (int i = 2; i <= n; i++)

       cout << ',' << x[i];

    cout << ')' << endl;

 

 

}

 

int main()

{

    int n, c, *v, *w, *x;

    cin >> n >> c;

    int **m;

    m = new int*[n + 1];

    for (int i = 1; i <= n; i++)

       m[i] = new int[c + 1];

    for (int i = 1; i <= n; i++)

    for (int j = 0; j <= c; j++)

       m[i][j] = -1;

    v = new int[n + 1];

    w = new int[n + 1];

    x = new int[n + 1];

    for (int i = 1; i <= n; i++)

       cin >> w[i];

    for (int i = 1; i <= n; i++)

       cin >> v[i];

    Knapsack(v, w, c, n, m);

    Traceback(m, w, c, n, x);

    prin(x, n);

    return 0;

}
