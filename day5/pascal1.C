#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int p=n;
    for(int i=0;i<=n;i++){
        int prev=1;
        for(int m=0;m<p;m++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<prev<<" ";
            prev=prev*(i-j)/(j+1);
        }
        p--;
        cout<<endl;
    }
    return 0;
}