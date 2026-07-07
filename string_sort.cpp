 #include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int n;
    cin>>n;

    string arr[n];

    for(int i=0 ; i< n ;i ++){
        cin>>arr[i];
    }
    for(int i= 0;i< n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    sort(arr,arr + n);

    for(int i= 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }

}