int main() {
   float input(); 
   float sqqrt, n;
   void output(float sqqrt, float n);
   printf("Enter a number: ");
   scanf("%f", &n);

   // computing the square root
   for(sqqrt = 0.01;sqqrt*sqqrt<n;sqqrt=sqqrt+0.01);

   printf( "Square root of %.1f = %.1f",n,sqqrt);
}