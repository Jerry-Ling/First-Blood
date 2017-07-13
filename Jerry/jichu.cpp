#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void chuchihua_shuzu(char* shuzu[],int size)
{
	
	int i=0,k=0;
	for(k=0;k<=size;k++)
	{
		i=k+1;
		shuzu[k]=i;
	}
}

void zhengqi_shuzu(char* shuzu[],int size)
{
	for(int j=0;j<=size;j++)
	{
		cout<<setw(9)<<(int)shuzu[j]<<" ";
		if((j+1)%8==0)
		{
			cout<<endl;
		}
	}
}

int main()
{	
	char shuzu[1024];
	chushihua_shuzu(shuzu,1024);
	zhengqi_shuzu(shuzu,1024);
	return 0;			
}
