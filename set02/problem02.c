#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
 scalene=check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
  }
int input_side(){
  int side;
  printf("Enter the side:");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c){
  int triangle=0;
  if(a==b || b==c || c==a){
      triangle=1;
    }
  return triangle;
  }
  
  void output(int a, int b, int c, int isscalene){
 if (isscalene==1){
 printf("The triangle with side %d,%d and %d is not scalene",a,b,c);
   }
    else {
   printf("The triangle is %d,%d and %d is scalane",a,b,c);
    }
    }