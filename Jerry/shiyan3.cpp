#include <iostream>
using namespace std;

void ll(int *a)
{	
	*a=*a+10;
	cout<<*a<<"01"<<endl;
}

int main()
{
	int a=30;
	ll(&a);
	cout<<a<<"02"<<endl;
	return 0;
}
