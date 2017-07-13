#include <iostream>
using namespace  std;
void Perm(char a[],int k, int m)
{
	if(k==m)
	{	
		for(int i=0;i<=m;i++)
		cout<<a[i];
		cout<<endl;
	}
	else 
		for(int i=k;i<=m;i++)
	{	
		swap(a[k],a[i]);
		Perm(a,k+1,m);
		swap(a[k],a[i]);
     	}
}
void swap(char&a,char&b)
{
		char temp=a;
		a=b;
		b=temp;
}
int main()
{
	char a[100];
		cout<<"输入你要排列的符号个数";
	int n;
		cin>>n;
		cout<<"输入这些符号";
for(int i= 0;i<n;i++)
{	cin>>a[i];}
	Perm(a,0,n-1);
return 0;
}
