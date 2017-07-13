#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
//#define SIZE 1024

static unsigned long int abc=1;
int jerry_rand(void)
{
	abc=abc*1103515245+12345;
	return(unsigned int)(abc/65536)%32768;
}

void jerry_srand(unsigned int seed)
{
	abc=seed;
}

void init_array_rand(char shuzu[], int size) 
{	
	jerry_srand(0);
	int k,ran_num;	
	for(k=0;k<=size;k++)
		{
			ran_num=(jerry_rand()%(128-(-128)))-128;
			shuzu[k]=ran_num;
		}

}



void print_array(char shuzu[],int size)
{
	int j=0;
	// Print Array
	 for(j=0;j<=size;j++)
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
	int SIZE;
	cin>>SIZE;	
	char shuzu[SIZE];
	init_array_rand(shuzu,SIZE);

 	print_array(shuzu,SIZE);
	return 0;			
}
