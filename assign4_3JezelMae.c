#include <stdio.h>


int main()
{
  
  int a, b, table; 
 
  
  for( a = 1; a<=10; a++)
  {
    for( b = 1; b<=10; b++)
    {
      table = a * b; 
      printf("%4d",table);
    }
    printf("\n");
   
  }
  
}