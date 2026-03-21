#include<stdio.h>

int main(){
  int a = 20;
  int b = 10;
  int sum, difference, product, quotient, remainder;

  sum = a + b;
  difference = a - b;
  product = a * b;
  quotient = a / b;
  remainder = a % b;

  printf("Numbers used: a = %d, b = %d\n\n" , a, b);
  printf("Sum (a + b): 5d\n" , sum);
  printf("Difference (a - b): %d\n" , difference);
  printf("Product (a * b): %d\n" , product);
  printf("Quotient (a / b): %d\n" , quotient);
  printf("Remainder (a %% b): %d\n" , remainder);

return 0;
}
