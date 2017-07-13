#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//void init(int N,int H,int W,int C)
int NCHW2NHWC(int N,int H,int W,int C)
{
	int  a_4D[N][C][H][W],b_4D[N][H][W][C],num;
	int a,b,c,d,e,f,g,h;
	for(e=0;e<N;e++)
	{
		for(f=0;f<C;f++)
		{
			for(g=0;g<H;g++)
			{
				for(h=0;h<W;h++)
				{
					srand(time(NULL));
					num=rand()%101;
					a_4D[e][f][g][h]=num;
				}
			}
		}
	}
	for(a=0;a<N;a++)
	{
		for(b=0;b<C;b++)
		{
			for(c=0;c<H;c++)
			{
				for(d=0;d<W;d++)
				{
					b_4D[a][c][d][b]=a_4D[a][b][c][d];
				}
			}
		}
	}
	return b_4D[N][H][W][C];
			
}


int main()
{
	cout<<NCHW2NHWC(1,2,3,4);
	return 0;
}
