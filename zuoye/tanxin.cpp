#include <iostream>
using namespace std;
void sj(int s[],int f[],int x[],int a[],int n)
{
	for(int j=0;j<n;j++)
	for(int i=0;i<n;i++)
		if(f[a[i-1]]>f[a[i]])
		{
			int tmp=a[i];
			a[i]=a[i-1];
			a[i-1]=tmp;
		}
	x[a[0]]=1;int t=a[0];
	for(int i=1;i<n;i++)
		if(s[a[i]]>=f[a[t]])
		{
			x[a[i]]=1;
			t=a[i];
		}
		else
			x[a[i]]=0;
}
void main()

{
	int s[100],f[100],x[100],a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cin>>s[i]>>f[i];
		a[i]=i;
	}
	sj(s,f,x,a,n);
	for(int i=0;i<n;i++)
		cout<<x[i]<<' ';

}






















