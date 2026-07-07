#include<iostream>
#include<vector>
using namespace std;
int main(){

    int row;
    cin>>row;

    vector<int>ans;
    int val=1;

    for(int j= 0; j<=row ;j++){
        ans.push_back(val);
        val=val*(row-j)/(j+1);
        
    }

    for(int x : ans){
        cout<<x;
    }
    return 0;
}