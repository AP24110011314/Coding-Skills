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
    cout<<"Snake form of Matrix::";
    int j=0;
    int p=n-1;
    for(int i=0;i<n;i++){
        if(j==0){
            for( j;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(p;p>=0;p--,j--){
                cout<<mat[i][p]<<" ";
            }
            p=n-1;
        }
    
        
    }
    

    

  

    return 0;
}