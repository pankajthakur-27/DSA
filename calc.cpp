#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    char op;
    char choice;

    int n;

    do{
        cout<<"enter a number :-";

        cin>>n;

    cout<<"enter two number ";
    cin>>a>>b;
    cout<<"enter your required operator ('+','-','*','/','r = square_root' , 's=square' ) : ";
    cin>>op;

    switch (op){
        case '+':
        cout<<"result as : = "<<a+b;
        break;
        case '-':
        cout<<"result as : = "<<a-b;
        break;
        case '*':
        cout<<"result as : ="<<a*b;
        break;
        case '/':
        if (b!=0)
        cout<<"result as : ="<<a/b;
        else
        cout<<"division error";
        break;
        case 'r':
        cout<<"square_root of number := "<<sqrt(n);
        break;
        case 's':
        cout<<"enter number to find squre root : ="<<n*n;
        break;

        default :
        cout<<"invalid operator";
    }
        cout<<"Do you want to continue : (y/n)";
        cin>>choice;

}
    while ( choice == 'y' || choice == 'Y');

    return 0;

}
