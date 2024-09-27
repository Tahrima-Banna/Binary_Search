#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int x){

    int l=0, r= n-1;
    int ans=-1;

    while(l<=r){

        int mid =(l+r)/2;


        if(arr[mid]==x){

            ans=mid;
            r=mid-1;
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


int lastocc(int arr[],int n,int x){

    int l=0, r= n-1;
    int ans1=-1;

    while(l<=r){

        int mid =(l+r)/2;


        if(arr[mid]==x){

            ans1=mid;
            l=mid+1;
        }

        else if(arr[mid]>x){

            r=mid-1;
        }
    else{
        l=mid+1;
    }
    }
    return ans1;
}



int main()

{
    int n,x;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    cin>>x;

    int countocc = (lastocc(arr,n,x)-firstocc(arr,n,x))+1;

    cout<<countocc<<endl;

    return 0;
}
