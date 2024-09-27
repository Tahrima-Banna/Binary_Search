#include<bits/stdc++.h>
using namespace std;

void bs(int arr[],int n,int x)
{
    int low=0,high=n-1;


    while(low<=high){

        int mid = (low+high)/2;

         if(arr[mid]==x){

        cout<<"number is found at index:"<<endl;

        cout<<mid<<endl;
        return ;
    }
    else if(arr[mid]>x){

        high=mid-1;
    }

    else if(arr[mid]<x){

        low=mid+1;

    }


    }
     cout<<"not found";

}


int main()

{
    int n,i;
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bs(arr,n,x);
    return 0;
}
