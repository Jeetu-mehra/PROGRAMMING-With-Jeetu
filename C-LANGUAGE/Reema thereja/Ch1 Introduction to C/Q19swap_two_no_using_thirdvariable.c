#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("first number is : %d",a);
    printf("\nsecond number is : %d",b);
}