#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main(){
  float n;
  float sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n,sqrroot);
}
float input(){
  float n;
  printf("enter n");
  scanf("%f",&n);
  return n;
}
float square_root(float n){
  int x=n;
  int y=1;
  while(x>y){
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
void output(float n, float sqrroot){
  printf("The squareroot of %2.1f is %2.1f",n,sqrroot);
}
