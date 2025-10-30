#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int sum=1;
    int q=int(sqrt(n));
    for(int i=2;i<=q;i++){
        if(n%i==0 && i!=(n/i)){
            sum+=(i+(n/i));
        }
    }
    if(sum==n){
        cout<<"it's a perfect Number.";
    }
    else{
        cout<<"Not a Perfect Number.";
    }
    return 0;
}
 