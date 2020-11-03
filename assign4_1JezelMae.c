#include <stdio.h>
int main()
{
  int i; 
  char name; 
  char ch_arr[5][20] = {
                         "Jezel",
                         "\nMae",
                         "\nPalma",
                         "\nDemetrio",
                         "\nData_Structure"
                     };
   for(i=0;i<5;i++)
   {
     printf("%s",ch_arr+i);
   }
   printf("\n");
}
    