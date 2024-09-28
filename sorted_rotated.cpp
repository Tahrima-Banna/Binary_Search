#include<bits/stdc++.h>
using namespace std;

int rotated(int ar[],int l,int r){

     int ans=0;
    while(l<=r){

      int mid=(l+r)/2;

      if(mid<r && ar[mid+1]<ar[mid]){

           ans=mid+1;
           break;
      }
    else if(mid>l && ar[mid]<ar[mid-1]){

         ans = mid;
         break;
    }

     if(ar[mid]<ar[r]){

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
    int n,i;
    cin>>n;
    int ar[n+1];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int res = rotated(ar,0,n-1);
    cout<<res<<endl;
    return 0;
}
