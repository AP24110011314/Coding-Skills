#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int m=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            m++;
            break;
        }

    }
    if(m==0){
        printf("Prime.");
    }
    else{
        printf("Not prime.");
    }
    return 0;
}