#include<bits/stdc++.h>
using namespace std;

int cont(int a[],int l,int r){

    int ans=0;
    while(l<=r){

        int mid=(l+r)/2;
        if(mid<r && a[mid+1]<a[mid]){
            ans=mid+1;
            break;
        }
        else if(mid>l && a[mid]<a[mid-1]){
            ans=mid;
            break;
        }
        else if(a[mid]<a[r]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}

int  bin_src(int a[],int l,int r,int x){

    int res= -1;

    while(l<=r){

        int mid=(l+r)/2;

        if(a[mid]==x){

          res=mid;
          return mid;

        }
    else if(a[mid]<x){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
    }

    return res;
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
    int idx = cont(a , 0, n-1);

    int ans1 = bin_src( a ,0, idx-1, x);
    int ans2 = bin_src( a, idx, n-1, x);

    cout<<max(ans1,ans2)<<endl;
    return 0;
}
