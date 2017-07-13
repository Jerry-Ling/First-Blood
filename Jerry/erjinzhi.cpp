#include <iostream>
using namespace std;
int main()
{
	int sec(int n);
	int i;
	cin>>i;
	sec(i);
	cout<<endl;
	return 0;
		
}

int sec(int n)
{
	int i;
	if(n>=0)
	{
		if(n!=0)
			{
				i=n%2;
				sec(n/2);
				cout<<i;
			}
	}
	else
	{
		cout<<"-";
		n=-n;
		if(n!=0)
                        {
                                i=n%2;
                                sec(n/2);
                                cout<<i;
                        }

	}
	return i;
}
