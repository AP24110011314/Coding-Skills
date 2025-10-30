#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of dynamic array: ";
    cin>>n;
   int *ptr;
   ptr=(int*)malloc(n*sizeof(int));
   cout<<"Enter the elements of array:: ";
   for(int i=0;i<n;i++){
    cin>>*(ptr+i);
       }
   cout<<endl<<"Array:: ";
   for(int i=0;i<n;i++){
    cout<<endl<<*(ptr+i);
     }
    int big=*ptr;
    for(int i=0;i<n;i++){
    if(big<*(ptr+i)){
        big=*(ptr+i);
    }
       }
    cout<<endl<<"The biggest element: "<<big;
    return 0;
}