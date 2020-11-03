#include <stdio.h>

struct cricketer
{
  char name[100];
  int age; 
  int test; 
  int roll; 
  float ave; 
};

void main()
{
  struct cricketer x[10];
  int y; 
  
  printf("Enter information of cricketer\n");
  
  for (y = 1; y < 10; ++y)
  {
    x[y] .roll =y; 
    
    printf("\nFor roll number %d\n", x[y] .roll); 
    printf("Enter name: ");
    scanf("%s", x[y] .name);
    printf("Enter age: ");
    scanf("%d", &x[y] .age);
    printf("Enter test matches: ");
    scanf("%d", &x[y] .test);
    printf("Enter Average runs: ");
    scanf("%f", &x[y] .ave);
    printf("\n");
  }
  printf("\nDisplaying information of players: \n\n");
  
  for ( y = 0; y < 10; ++y)
  {
    printf("\nInformation for roll number %d:\n", y+1);
    printf("Name: ");
    puts(x[y] .name);
    printf("Age: %d", x[y] .age);
    printf("\nTest Matches: %d", x[y] .test);
    printf("\nMarks: %.1f\n", x[y] .ave);
  }
  return 0;
}