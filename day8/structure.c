#include <stdio.h>
struct student{
    char rno[21];
    char fname[50];
    char lname[40];
    double gpa;
    int age;
    long long int cno;
};
typedef struct student stud;
int main(){
    stud s1, s2;
    printf("\nEnter first student s1 details:\n");
    printf("\nEnter roll number:\n");
    scanf("%s", s1.rno);
    printf("Enter first name:\n");
    scanf("%s", s1.fname);
    printf("Enter last name:\n");
    scanf("%s", s1.lname);
    printf("Enter GPA:\n");
    scanf("%lf", &s1.gpa);
    printf("Enter age:\n");
    scanf("%d", &s1.age);
    printf("Enter contact number\n");
    scanf("%lld", &s1.cno);
    printf("\nDetails of first student s1:\n");
    printf("Roll number : %s\n", s1.rno);
    printf("First name : %s\n", s1.fname);
    printf("Last name : %s\n", s1.lname);
    printf("GPA : %lf\n", s1.gpa);
    printf("Age : %d\n", s1.age);
    printf("Contact number : %lld\n", s1.cno);
    printf("\nEnter second student s2 details:\n");
    printf("Enter roll number:\n");
    scanf("%s", s2.rno);
    printf("Enter first name:\n");
    scanf("%s", s2.fname);
    printf("Enter last name:\n");
    scanf("%s", s2.lname);
    printf("Enter GPA:\n");
    scanf("%lf", &s2.gpa);
    printf("Enter age:\n");
    scanf("%d", &s2.age);
    printf("Enter contact number\n");
    scanf("%lld", &s2.cno);
    printf("\nDetails of second student s2:\n");
    printf("Roll number : %s\n", s2.rno);
    printf("First name : %s\n", s2.fname);
    printf("Last name : %s\n", s2.lname);
    printf("GPA : %lf\n", s2.gpa);
    printf("Age : %d\n", s2.age);
    printf("Roll number : %lld\n", s2.cno);
    if(s1.gpa > s2.gpa){
        printf("\n%s is topper...", s1.fname);
    }
    else if(s1.gpa < s2.gpa){
        printf("\n%s is topper...", s2.fname);
    }
    else{
        printf("\nBoth %s and %s are toppers...", s1.fname, s2.fname);
    }
}





