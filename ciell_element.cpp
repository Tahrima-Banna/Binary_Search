#include<bits/stdc++.h>
using namespace std ;

int floor(int a[],int n,int x){

    int l=0, r=n-1;
    int ans=0;
    while(l<=r){

        int mid = (l+r)/2;

        if(a[mid]== x){
            ans=mid;
            break;
        }
        else if(a[mid]>x){
            ans= a[mid];
            r=mid-1;

        }
        else{
        l=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int x;
    cin>>x;
    int idx=floor(a,n,x);
    cout<<idx<<endl;
    return 0;
}
