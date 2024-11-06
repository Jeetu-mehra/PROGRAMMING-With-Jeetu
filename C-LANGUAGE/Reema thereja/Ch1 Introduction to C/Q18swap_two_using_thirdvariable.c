#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("first number is : %d",a);
    printf("\nsecond number is : %d",b);
}
