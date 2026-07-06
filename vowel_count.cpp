#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter your name : - ";
    cin>>name;

    int count=0;

    for(int i =0 ; i<name.length() ; i++){
        if(name[i]=='a' || name[i]=='e'  || name[i]=='i' || name[i]=='o' || name[i]=='u' ||
        name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')

        count++;
    }
    cout<<"total vowels"<<count;
    return 0;