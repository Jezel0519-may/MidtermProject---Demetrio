#include <stdio.h>


int main()
{
  int num1,num2;
  int sum;
  int difference;
  int product;
  float qoutient;
  
  printf ("Enter two integers: ");
  scanf("%d %d",&num1, &num2);
  
  sum = num1 + num2;
  difference = num1 - num2;
  product = num1 * num2;
  qoutient=num1/num2;
  
  printf("\nThe sum is: %d", sum);
  printf("\nThe difference is: %d",difference);
  printf("\nThe product is: %d",product);
  printf("\nQoutient: cannot divide by 0\n");
  
  
  return 0;
}
  