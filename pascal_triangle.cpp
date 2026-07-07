#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter no. of integer :-";
    cin>>n;
    
    for(int i=0 ;i<n ;i++){
        int val=1;
        for(int j= 0; j<=i ;j++){
            
            val=val*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}
