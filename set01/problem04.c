#include <stdio.h>
int input();
void add (int a, int b,int*sum);
void output(int a, int b, int sum);

int main(){
  int a,b,sum;
  a=input();
  b=input();
  add(a,b, &sum);
  output(a,b,sum);
  return 0;
}


int input(){
  int digit;
  printf("enter the number");
  scanf("%d",&digit);
  return digit;
}


void add (int a, int b,int*sum)
{
*sum=a+b;
}


void output(int a, int b, int sum)
{
  printf("sum of %d and %d is %d",a,b,sum);
}






  