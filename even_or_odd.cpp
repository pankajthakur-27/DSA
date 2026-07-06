#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements is array :- ";
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ;i++){
        cin>>arr[i];

    }

    for(int i=0 ; i<n ;i++){
        cout<<arr[i];
    }

    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<"number is even "<<endl ;
        }

        else{
            cout<<arr[i]<<"number is odd ";
        }
    }
    return 0;
