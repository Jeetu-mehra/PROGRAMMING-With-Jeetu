#include<stdio.h>
#include<math.h>
int main(){
    float r;
    float area;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    area = (22.0/7)*r*r;
    printf("The area of the circle is: %f",area);
}