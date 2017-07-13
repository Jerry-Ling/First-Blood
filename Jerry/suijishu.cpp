#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int ran_num;
	for(int x=0;x<100;x++)
	{
		ran_num=(rand()%(128-(-128)))-128;
		cout<<ran_num<<" ";
	}
return 0;
}

