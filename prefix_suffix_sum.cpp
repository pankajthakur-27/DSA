#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i=0 ; i<n ;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i= 0 ;i<v.size() ;i++){
        cout<<v[i]<<" ";

    }

    int total=0;
    for(int i=0 ; i<n ;i ++){
        total+=v[i];
    }

    int prefixsum=0 ;
    for(int i= 0; i<n ;i++){
        prefixsum+=v[i];

        int suffixsum=total-prefixsum;

        if(suffixsum==prefixsum){
            cout<<"yes";

            return 0;
        }
    }
    cout<<"no";
    return 0;

    
}