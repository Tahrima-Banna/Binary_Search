#include<bits/stdc++.h>
using namespace std ;

int bs(int arr[],int n,int x){

    int l=0,r=n-1,ans=-1;

  while(l<=r){

    int mid=(l+r)/2;  //first occurance r=mid-1;


    if(arr[mid]== x){// this codition for last occurance
        ans=mid;
        l=mid+1;
    }
    else if(arr[mid]>x){
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
    int n,i,x;

    cin>>n>>x;

    int arr[n+1];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
  int idx= bs(arr,n,x);

  if(idx !=1){
     cout<<idx<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }

    return 0;
}
