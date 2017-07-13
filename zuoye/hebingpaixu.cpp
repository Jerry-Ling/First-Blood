#include <iostream>

using namespace std;

void M_sort(int a[],int b[],int l,int m,int r){

    int  i=l;

    int  j=m+1;

    int  k=0;

   while(i<=m&&j<=r){

        if(a[i]<=a[j])

            b[k++]=a[i++];

        else

          b[k++]=a[j++];

    }


    while(i<=m){

        b[k++]=a[i++];

 

    }

    while(j<=r){

        b[k++]=a[j++];

    }

    for(int i=0;i<r-l+1;i++){

        a[i+l]=b[i];

    }

}

void Merge(int a[],int l,int r){

    int b[100];

    if(l<r){

        int m=(l+r)/2;

        Merge(a,l,m);

        Merge(a,m+1,r);

        M_sort(a,b,l,m,r);

    }

}

int main(){

    int a[100] ,n;

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>a[i];

    }

    Merge(a,0,n-1);

    for(int i=0;i<n;i++){

      cout<<a[i]<<" ";

    }

    return 0;

}
