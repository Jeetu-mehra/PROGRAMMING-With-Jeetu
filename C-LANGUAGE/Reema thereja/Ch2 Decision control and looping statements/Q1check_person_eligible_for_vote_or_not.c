#include<stdio.h>
int main(){
    int age;
    printf("Enter the age of the person: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Person is eligible for vote");
    }
    else
    {
        printf("Person is Not eligible for vote");
    }
}