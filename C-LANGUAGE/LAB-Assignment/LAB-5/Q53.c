// 53)
//     *
//    ***
//   *****
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=4;i++)
  {  
    for(j=1;j<=4-i;j++)
    {
      printf("  ");
    }
    for(j=1;j<=i;j++)
    {
      printf(" *");
    }
    for(j=1;j<i;j++)
    {
      printf(" *");
    }
    printf("\n");
  }
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("  ");
    }
    for(j=1;j<5-i;j++){
      printf(" *");
    }
    for(j=1;j<=i-j;j++){
      printf(" *");
    }
    printf("\n");
  }
}
