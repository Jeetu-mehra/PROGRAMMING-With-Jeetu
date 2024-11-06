#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    printf("Enter the sides of Triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<=c||b+c<=a||c+a<=b){
        printf("Triangle is not possible!!");
    }
    else{
        s=(a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of triangle: %f",area);
    }
}