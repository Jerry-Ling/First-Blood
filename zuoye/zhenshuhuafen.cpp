#include <iostream>
using namespace std;
int huafen(int n,int m)
{
	if(n<1||m<1) return 0;
	if(n==1||m==1) return 1;
	if(n<m) return huafen(n,n);
	if(n==m) return 1+huafen(n,m-1);
         return huafen(n,m-1)+huafen(n-m,m);
} 
int main()
{
	int a;
	cin>>a;
	cout<<huafen(a,a);
	return 0;
}
