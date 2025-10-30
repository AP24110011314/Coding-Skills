#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows: ";
    cin>>n;
    cout<<"Enter the columns: ";
    int m;
    cin>>m;
   int *ptr;
   ptr=(int*)malloc(n*m*sizeof(int));
   cout<<"Enter the elements of matrix:: ";
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>*(ptr+i*n+j);
       
    }
   }
   cout<<endl<<"Array:: "<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

    cout<<" "<<*(ptr+i*n+j);
    
    }
    cout<<endl;
    }
   return 0;
}
//*(*(p+i)+j);for dynamic location(using pointer to pointer concept)