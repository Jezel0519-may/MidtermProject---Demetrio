#include <stdio.h>

void rectPerimeter();

int main()  
{
  void recPerimeter();
  int length; 
  int width; 
  int perimeter=0;
  
  printf("Enter the rwctangle's length and width: ");
  scanf("%d %d",&length,&width);
  
  perimeter = 2*(length + width);
  
  printf("\nThe rectangle's perimeter is: %d\n",perimeter);
  
  return 0;
}