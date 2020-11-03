#include <stdio.h>

int main()
{
  
  int x, prod; 
  int num[11];
  
  for ( x =1; x < 11; x++)
  {
    +1;
    printf("Enter value %d: ",x); 
    scanf("%d", &num[x]);
  }
  
  printf("\nThe multiplied values are: \n");
  
  for ( x = 1; x < 11; x++)
  {
    +1;
    prod = (x-1) * num[x];
    printf("Value %d: %d\n",x, prod); 
  }
  
}