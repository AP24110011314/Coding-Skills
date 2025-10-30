#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int sum=0;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            sum+=i;
        }

    }
    if(n==sum){
        printf("Perfect Number.");
    }
    else{
        printf("Not a Perfect Number.");
    }
    return 0;
}