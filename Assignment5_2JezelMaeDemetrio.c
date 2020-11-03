#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int *ptr;
    int *ip2;

    for (int i= 0; i<5; i++)
    {
    printf("Enter the 1st value of array: ");
    scanf("%d", &arr[i]);
    }
    ptr = &arr[3];
    printf("\nThe value of 3rd value of array is: %d \n", *ptr);
    
    ip2 = ptr -2;
    printf("\nThe value of 2rd value is: %d\n", *ip2);

    return 0;
}