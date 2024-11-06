#include<stdio.h>
int main(){
    char a;
    int b;
    printf("Enter any character in upper case: ");
    scanf("%c",&a);
    if( a<=122 && a>=97){
        printf("Please enter character in upper case!! ");
    }
    else{
        a=a+32;
        printf("The given charcter in lower case is: %c",a);
    }
}

