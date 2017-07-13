#include <iostream>
using namespace std;
void maopao(int a[],int n){
   for(int i=1;i<n;i++){
     for(int j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
     }
   }
}
int bin(int a[],int l,int r,int k){
     if(l<r){
        int m=(l+r)/2;
        if(a[m]==k)
            return m;
        else if(a[m]>k)
            return bin(a,l,m-1,k);
        else
            return bin(a,m+1,r,k);
     }
}
int main()
{
    int a[100];
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    maopao(a,n);
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cin>>k;
    cout<<bin(a,0,n-1,k);
    return 0;
}
