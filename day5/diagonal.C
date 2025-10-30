#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the n for N*N matrix: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of matrix: ";
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"The Matrix::"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i){
                sum+=mat[i][j];
            }
        }
        
        
    }
    cout<<"The sum of diagonal elements::";
    cout<<sum;

  

    return 0;
}