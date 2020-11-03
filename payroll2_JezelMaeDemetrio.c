#include <stdio.h>

int main()
{
  a();
 
}

void a (void)

{
  float hrs; 
  float sal; 
  float pro; 
  
  printf("Enter the number of hours: ");
  scanf("%f",&hrs);
  
  printf("Enter the salary per hour: ");
  scanf("%f",&sal);
  
  printf("\n");
  
  pro = hrs * sal; 
  
  printf("Your payroll is %.2f",pro);

  
}
    