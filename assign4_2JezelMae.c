#include <stdio.h>


int main()
{
  
  int n, sum = 0, c, array[100];

  printf("Enter the array you want to add: ");
  scanf("%d", &n);
   
  printf("\nEnter %d integers: ", n);

  for(c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
      sum += array[c];
   }
  printf("\nThe sum of all array is:= %d\n", sum);
  
  return 0;
}
    