#include <stdio.h>


int add(int *x, int *y)
{
  int add; 
  add = *x + *y; 
  return add; 
}
int main()
{
  int x, y; 
  int sum; 
  
  printf("Enter first number: ");
  scanf("%d", &x); 
  
  printf("\nEnter second number: ");
  scanf("%d", &y);
  
  sum = add (&x, &y);
  
  printf("\nThe sum of two numbers is: %d\n", sum); 
  
  return 0;
 
}