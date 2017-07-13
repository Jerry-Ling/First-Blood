//自底向上的非递归
#include<iostream>
using namespace std;
int fib(int n)

{

    int a[100];

    a[0] = a[1] = 1;

    for (int i = 2; i <= n; i++)

       a[i] = a[i - 1] + a[i - 2];

    return a[n];

}
int main()

{

 

    int n;

    cin >> n;

    cout << fib(n) << endl;

    return 0;

}
