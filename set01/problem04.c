#include<stdio.h>
long addTwoNumbers(long*,long*);
int main
{
  long fno,sno,sum;
  printf("\n\n pointer: add two number using call by reference:\n");
  printf("----------------------------------------------------:\n");
  printf("input the first number:");
  scanf("%1d",&fno);
  printf("input the second number:");
  scanf("%1d",&sno);
  sum=addTwoNumbers(&fno,sno);
  printf("the sum of %1d and %d is %1d\n\n",fno,sno,sum);
  return0;
}
long addTwoNumber(long*n1,long*n2)
{
  long sum;
  sum=*n1+*n2)
    return sum;
}