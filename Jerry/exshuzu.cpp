#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
using namespace std;
#define SIZE 1024

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

void init_array_rand(char shuzu[], long long size) 
{	
	jerry_srand(0);
	long long k;
	int ran_num;
		
	for(k=0;k<size;k++)
		{
			ran_num=(jerry_rand()%(128-(-128)))-128;
			shuzu[k]=ran_num;
		}
}

void print_binary_file(char shuzu[],long long size)
{
	ofstream jerrybinout("a.bin",ios::out|ios::binary);
	jerrybinout.write((char*)&shuzu[0],sizeof(char)*SIZE);
        jerrybinout.close();
}

void print_array_to_file(char shuzu[],long long size)
{
	ofstream txtout("a.txt");
	int i=0;
	for(;i<SIZE;i++)
	{
		txtout<<setw(9)<<(int)shuzu[i]<<" ";
		if((i+1)%8==0)
		{
			txtout<<endl;
		}
	}
	txtout<<endl;
	txtout.close();
}

int main()
{	
	char shuzu[SIZE];
	init_array_rand(shuzu,SIZE);
	print_binary_file(shuzu,SIZE);
 	print_array_to_file(shuzu,SIZE);
	return 0;			
}
