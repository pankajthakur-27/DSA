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

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n, x;
    cout<<"enter no. of element in first array :- ";
    cin>>n;

    vector<int>v;

    for(int i=0 ;i<n ;i++){
        cin>>x;
        v.push_back(x);
    }

    for(int i=0 ; i<v.size(); i++){
        cout<<v[i];
    } cout<<endl;

    int j,g;

    cout<<"enter no. of elements in 2nd array :- ";
    cin>>j;

    vector<int>v2;

    for(int i=0 ;i< j ;i++){
        cin>>g;
        v2.push_back(g);
    }

    for(int i=0 ; i<v.size();i++){
        cout<<v[i];
    } cout<<endl;

    vector<int>v3;

    for(int i= 0 ;i<v.size();i++){
        v3.push_back(v[i]);
    }

    for(int i= 0;i<v2.size();i++){
        v3.push_back(v2[i]);
    }

    cout<<"merge array :-";

    for(int i=0 ;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    
    return 0;

}
