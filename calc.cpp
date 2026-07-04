#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    char choice;

    cout<<"enter two number ";
    cin>>a>>b;
    cout<<"enter your required operator ('+','-','*','/') : ";
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
        else;
        cout<<"division error";
        break;

        default :
        cout<<"invalid operator";
    }
        cout<<"Do you wnmat to continue : (y/n)";
        cin>>choice;

    
    while ( choice == 'y' || choice == 'Y')
    return 0;

}
