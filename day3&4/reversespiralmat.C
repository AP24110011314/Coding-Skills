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
    cout<<"Reverse Snake form of Matrix::";
    int j=n-1;
    int p=0;
    for(int i=0;i<n;i++){
        if(j==n-1){
            for( j;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(p;p<=n-1;p++,j++){
                cout<<mat[i][p]<<" ";
            }
            p=0;
        }
    
        
    }
    

    

  

    return 0;
}