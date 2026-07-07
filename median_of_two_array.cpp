#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    int m;

    cin>>n;
    cin>>m;

    int arr1[n];
    int arr2[m];

    for(int i= 0; i< n;i++){
        cin>>arr1[i];
    }

    for(int i=0 ;i< m ;i++){
        cin>>arr2[i];
    }

    for(int i= 0;i<n ; i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;

    for(int i= 0 ;i<m ;i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;

    vector<int>ans;

    for(int i =0 ;i< n; i++){
        ans.push_back(arr1[i]);
    }

    for(int i =0 ;i< m ;i++){
        ans.push_back(arr2[i]);
    }

    for(int i =0 ;i< ans.size() ;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    for(int i =0 ;i <ans.size() ;i++){
        sort(ans.begin() , ans.end());

        cout<<ans[i]<<" ";
    }cout<<endl;

    int size= ans.size();
    if(size%2==0){
        double median = (ans[size/2-1] + ans[size/2])/2.0;
        cout<<median;
    }

    else{
        cout<<ans[size/2];
    }
    return 0;
}