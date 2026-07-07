#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n, x;
    cout<<"enter no. of elements :- ";
    cin>>n;

    vector<int>v;
    for(int i=0; i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0 ;i<v.size();i++){

        cout<<v[i]<<" ";
    }
    for(int i=0 ; i<v.size() ;i ++){
        v[i]=v[i]*v[i];

    }

    for(int i=0 ; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
    
    }
