#include<iostream>
using namespace std;
 int main(){

    int n;
    cout<<"enter your number:- ";
    cin>>n;

    int l_digit=0;
    int reverse=0;
    while(n>0){
    l_digit=n%10;
    reverse=reverse*10+l_digit;
    n=n/10;
}
cout<<reverse;

return 0;
}

