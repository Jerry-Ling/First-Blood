#include <iostream>
using namespace std;
int jiecheng(int n)
{
	if(n==0) return 1;
		else return n*jiecheng(n-1);
}
int main()
{
	int a;
	cin>>a;
	cout<<jiecheng(a)<<endl;
	
}
