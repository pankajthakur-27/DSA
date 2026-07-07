#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int m;


    cin>>n;

    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));

    for(int i= 0 ;i< n ;i++){
        for(int j= 0 ;j< m ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i= 0 ;i< n;i++){
        for(int j=0 ;j< m ;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    int l1;
    int r1;
    int l2;
    int r2;


    cin>>l1;
    cin>>r1;
    cin>>l2;
    cin>>r2;

    int sum=0;

    for(int i=l1 ; i <=l2; i++){
        for(int j= r1 ; j<=r2 ; j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;

    return 0;
}