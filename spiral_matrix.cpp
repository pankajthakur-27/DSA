#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<vector<int>>ans(n,vector<int>(n));

    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;

    int num=1;

    while(top<=bottom && left<=right){
        for(int i =left ; i<=right ;i++){
            ans[top][i]=num++;
        }

        top++;

        for(int i= top ; i<=bottom ;i ++){
            ans[i][right]=num++;
            
        }
        right--;

        if(top<=bottom){
            for(int i= right ; i>=left ; i--){
                ans[bottom][i]=num++;
                
            }
            bottom--;
        }

        if(left<=right){
            for(int i= bottom ; i>=top ; i--){
                ans[i][left]=num++;
                
            }
            left++;

        }
    }
    cout<<"spiral matrix :-"<<endl;
    for(int i= 0 ; i<n;i++){
        for(int j= 0 ; j< n ; j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
