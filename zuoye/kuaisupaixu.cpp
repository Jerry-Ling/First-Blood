#include <iostream>

using namespace std;

int p(int a[],int b,int e){

   int i=b;

   int j=e;

   int k=a[b];

   while(i<j){

        while(i<j&&a[j]>=k)

             j--;

            a[i]=a[j];

        while(i<j&&a[i]<=k)

             i++;

             a[j]=a[i];

   }

   a[i]=k;

   return i;

}

void q_sort(int a[],int b,int e){

  if(b<e){

    int q=p(a,b,e);

    q_sort(a,b,q-1);

    q_sort(a,q+1,e);

  }

}

int main(){

   int a[100],i,n;

   cin>>n;

   for(i=0;i<n;i++)

      cin>>a[i];

    q_sort(a,0,n-1);

    for(i=0;i<n;i++)

      cout<<a[i]<<" ";

       return 0;

}

