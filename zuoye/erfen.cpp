#include <iostream>

using namespace std;

void maopao(int a[],int n)

{

    for(int i=1;i<n;i++)

      for(int j=0;j<n-i;j++)

      if(a[j]>a[j+1]){

        int t=a[j];

        a[j]=a[j+1];

        a[j+1]=t;

      }

}

int binary(int a[],int l,int r,int key){

    if(l<r){

        int m=(l+r)/2;

        if(a[m]==key)

           return m;

        if(a[m]>key)

           return binary(a,l,m-1,key);

        return binary(a,m+1,r,key);

    }

}

int main(){

  int a[100],n,i,k;

  cin>>n;

  for(i=0;i<n;i++)

    cin>>a[i];

  maopao(a,n);

  cin>>k;

  cout<<binary(a,0,n-1,k);

}
