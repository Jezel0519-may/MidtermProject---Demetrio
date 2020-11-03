#include <stdio.h>

int main()
{
   int* ptr, num;

   num = 10;
   printf("Address of num: %p\n", &num);
   printf("\nValue of num: %d\n", num);

   ptr = &num;
   
   printf("\nAddress of ptr: %p\n", &ptr);
   printf("\nValue of ptr: %p\n", ptr);
   printf("\nValue of pointer ptr: %d\n", *ptr);

    return 0;
}
    