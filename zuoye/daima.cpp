#include<iostream>
using namespace std;
void swap(char &a,char &b)
{
char tmp=a;
a=b;
b=tmp;
}
void perm(int a[],int k,int m)
{
if(k<m)
{
for(int i=0;i<=m;i++)
cout<<a[i]<<"";
cout<<endl;
}
else
{
for (int j=k;j<=m;j++)
{
swap(a[k],a[j])
perm(a,k+1,m)
swap(a[k],[j])
}
}
}
int main()
{
char a[10];
int i,n;
cin>>n;
for(i=o;i<n;i++)
cin>>a[i]
}


