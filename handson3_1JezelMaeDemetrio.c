#include <stdio.h>

int main()
{
  int x, y[10];
  
  printf("Enter 10 integers: ");
  
  for( x=0; x<10; x++)
  {
    scanf("\n%d",&y[x]);
  }
  
  printf("\nThe new Value are:");
  
  for( x=0; x<10; x++)
  
  {
    if( y[x] %2 == 0)
    {
      y[x] = 2 + y[x];
    }
    
    if( y[x] %2 != 0)
    {
      y[x] = 1 + y[x];
    }
    
    printf("%3d",y[x]);
    
  }
        
}
    