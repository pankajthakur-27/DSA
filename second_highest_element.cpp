#include<iostream>
using namespace std;
int main(){

     int n;
    cout<<"enter no. of elements in an array :-";
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<' '
        ;
    }

    int max=arr[0];

    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int secmax=arr[0];
    // for(int i= 0 ;i<n ;i++){
    //     if(arr[i]!=max){
    //         secmax=arr[i];
    //         break;
    //     }
    // }
    for(int i=0; i<n ;i++){
        if(arr[i]>secmax && arr[i]!=max){
            secmax=arr[i];
        }
    }
    cout<<secmax;

    return 0;
}