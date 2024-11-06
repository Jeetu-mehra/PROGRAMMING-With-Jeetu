#include<stdio.h>
int main(){
    int a,b,c,large;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    printf("Enter the third number= ");
    scanf("%d",&c);
    large= a>b?(a>c?a:c):(b>c?b:c);
    printf("The Largest number is: %d",large);
}
