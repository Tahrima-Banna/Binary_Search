#include<bits/stdc++.h>
using namespace std ;

int bs(int ar[],int n,int x){

    int l=0,r=n-1;
    int ans=-1;
    while(l<=r){

        int mid =(l+r)/2;
        if(ar[mid]==x){
            ans = mid;
            break;
        }
    else if(l<=ar[mid] && ar[mid-1]==x){
          ans = mid-1;
          break;
    }
    else if(r>=ar[mid] && ar[mid+1]==x){
          ans=mid+1;
          break;
    }
    else if(ar[mid]>x){
        r=mid-2;
    }
    else{
      l=mid+2;
    }

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int x;
    cin>>x;
    int res=bs(ar,n,x);
    cout<<res<<endl;
    return 0;
}
