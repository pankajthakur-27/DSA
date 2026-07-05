#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number :- ";
    cin>>n;
    int original = n;
    int rev =0 ;
    int l_digit ;

    while(n>0){
        l_digit=n%10;
        rev = rev*10+l_digit;
        n=n/10;        
    }
    cout<<rev<<endl;

    if(rev==original){
        cout<<" no. is pallindrom ";
    }
    return 0;
}