#include<iostream>
using namespace std;
int main(){

    int row ;
    int col;

    cout<<"enter no. of rows :-";
    cin>>row;

    cout<<"enter no. of column :-";
    cin>>col;

    int arr[row][col];

    for(int i=0 ;i<row ; i++){
        for(int j= 0; j<col ;j++){
            cin>>arr[i][j];
        }
    }

    for(int  i=0 ;i<row;i++){
        for(int j= 0; j<col ;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    int row_count=0;
    int ones_count =0;
    

    for(int i= 0;i<row; i++){
        int count =0;
        for(int j= 0;j<col ;j++){
            if(arr[i][j]==1){
                count++;
            }

        }

        if(count>ones_count){
            ones_count=count;
            row_count=i;
        }
       
    }
    cout<<ones_count<<endl;
    cout<<"row containing maximum no. of one :- ";
    cout<<row_count;

    return 0;
}