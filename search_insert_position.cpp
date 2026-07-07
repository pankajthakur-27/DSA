include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i= 0; i< n;i++){
        cin>>arr[i];
    }

    for(int i= 0;i<n ; i++){
        cout<<arr[i];
    }cout<<endl;

    for(int i =0 ;i< n ;i++){
        sort(arr,arr+n);
    }

    for(int i=0 ; i< n;i++){
        cout<<arr[i];
    }cout<<endl;



    int target ;
    cin>>target;

    int low=0;
    int high=n-1;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]==target){
            cout<<"element found :-"<<mid;
            return 0;
        }

        else if(arr[mid]<target){
            low=mid+1;
        }

        else{
            high=mid-1;
        }
    }

    cout<<"element not found  ";

    return 0;

}