#include<stdio.h>
#include<math.h>
int main(){
    float cel,fah;
    printf("Enter temprature in fahrenheit: ");
    scanf("%f",&fah);
    cel=(0.56)*(fah-32);
    printf("The temprature in degree celcius is: %f",cel);
}