#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("Enter your grocery total:");
  scanf("%f",  &subtotal);
  printf("The tax rate is: %.2f\n", tax);
 scanf("%f", &tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;

}
