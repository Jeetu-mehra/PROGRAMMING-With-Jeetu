#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter Any character: ");
    scanf("%c",&ch);
    if(isalpha (ch)>0)
    {
        printf("The user has entered an character");
    }
    else
    {
        printf("Person is Not eligible for vote");
    }
}