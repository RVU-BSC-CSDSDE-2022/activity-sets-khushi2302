#include <stdio.h>
float addTwoNumbers(float *,float *);
 
int main()
{
   float fno, sno, sum;   
 
   printf("Input the first number:");
   scanf("%f", &fno);
   printf("Input the second  number:");
   scanf("%f",&sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf("The sum of %.0f and %.0f  is %.0f", fno,sno, sum);
   return 0;
}
float addTwoNumbers(float*n1, float*n2) 
{
   float sum;
   sum=*n1+*n2;
}