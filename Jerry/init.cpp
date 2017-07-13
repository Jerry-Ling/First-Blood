#include <iostream>
using namespace std;
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
         
