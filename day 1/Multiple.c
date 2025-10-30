#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(i%3==0||i%5==0){
            sum=sum+i;

        }
    }
    printf("Sum: %d ",sum);
    return 0;
}