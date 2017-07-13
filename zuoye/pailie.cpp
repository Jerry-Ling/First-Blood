#include <iostream>
using namespace std;
void Swap(char&a,char&b);
void Perm(char list[],int k,int m)
{
	if(k==m)
	{
		for(int i=0;i<=m;i++)
			
				cout<<list[i];
				cout<<endl;	
		
	}
	else
	for(int i=k;i<=m;i++)
		{
			Swap(list[k],list[i]);
			Perm(list,k+1,m);
			Swap(list[k],list[i]);
		}
}
void Swap(char&a,char&b)
{
	char temp=a;
	a=b;
	b=temp;
}
int main()
{
	char a[100];
	int s;
	cin>>s;
	for(int q=0;q<s;q++)
		{
			cin>>a[q];
		}
	Perm(a,0,s-1);
	return 0;
}
