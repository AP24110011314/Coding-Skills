#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int q=int(sqrt(n));
    int f=0;
    if(n!=2&&n%2==0){
        f=1;
    }
    else if(n!=3&&n%3==0){
        f=1;
    }
    else{
        for(int i=5;i<=q;i+=6){
            if(n%i==0||n%(i+2)==0){
                f=1;
                break;
            }
        }
    }
    if(f==0){
        cout<<"It's Prime.";}
    else{
        cout<<"It's not a Prime.";
    }
    return 0;
}