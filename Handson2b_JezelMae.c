#include <stdio.h>
#include <math.h>

void main()
{
  float x, y, z; 
  
  printf("Enter the base number and exponent: ");
  scanf("%f %f",&x,&y);
  
  z = pow(x,y);
  
  printf("\n%.f raised to the %.f power is %.f\n",x,y,z);
  
  return 0;
  
}