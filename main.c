#include <stdio.h>
int main(void)
{
  int  a;
  float  x,y;
  printf("Enter number  > ");
  scanf("%d %f" ,  &a , &x );
  y  =  ( a * ( x * x *  x )  + 7 );
  printf(" y  =  %f\n" ,  y);
  return 0;
}
