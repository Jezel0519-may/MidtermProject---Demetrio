#include <stdio.h>

void a (void);
void b (void);
void c (void);

int main()
{
  int x = 20;
  int y = 10;
 printf("The two numbers are: %d & %d\n" ,x,y);
 
 a();
 b();
 c();
}

void a (void)

 {
   int sum,x = 20, y = 10; 
   sum = x + y; 
   printf("The sum of two numbers is: %d",sum);
   printf("\n");
 }
 
 void b (void)
 
 {
   int diff,x = 20, y = 10; 
   diff = x - y; 
   printf("The difference of two numbers is: %d",diff);
   printf("\n");
 }
 
 void c (void)
 
 {
   int prod,x = 20, y = 10; 
   prod =x * y; 
   printf("The product of two numbers is: %d",prod);
   printf("\n");
 }