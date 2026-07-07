#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n,x;
    cout<<"enter no. of elemenst :- ";
    cin>>n;

    vector<int>v;

    for(int i= 0 ; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    int even=0;
    int odd=0;

    for(int i=0 ; i<v.size() ; i++){
        if(v[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"even count :- "<<even<<endl;
    cout<<"odd count:- "<<odd<<endl;

    return 0;
}
