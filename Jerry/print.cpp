#include <iostream>
using namespace std;
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

