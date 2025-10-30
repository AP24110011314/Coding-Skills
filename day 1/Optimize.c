#include<stdio.h>
int ap(int a,int n,int d){
    int sum=(n/2)*(2*a+(n-1)*d);
    return sum;
}
int main(){
printf("Enter the Number:");
int n;
scanf("%d",&n);
printf("The sum of 3 and 5 multiplication till %d. ",n);
int sum=((ap(3,((n-1)/3),3)) + (ap(5,((n-1)/5),5))-(ap(15,((n-1)/15),15)));
printf("Sum :%d",sum);
return 0;
}

