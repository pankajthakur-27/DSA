 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number :- ";
    cin>>n;

    int digit;
    int sum=0;
    while(n>0){
        digit=n%10;
        sum+=digit;
        n=n/10;    
    }    
    cout<<sum;
    return 0;