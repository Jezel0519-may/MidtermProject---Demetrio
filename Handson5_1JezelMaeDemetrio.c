#include <stdio.h>
int main()
{
    char letter, *ptrx;
    int num, *ptry;
    float money, *ptrz; 

    ptrx = &letter;
    ptry = &num;
    ptrz = &money;


    printf("Enter your favorite letter: ");
    scanf("%c", &letter);

    printf("\nEnter your favorite number: ");
    scanf("%d", &num);

    printf("\nEnter your current money: ");
    scanf("%f", &money);

    printf("\n\n\nYour favorite letter is '%c', its memory address is '%p'\n", *ptrx, &ptrx);
    printf("\nYour favorite number is '%d', its memory address is '%p'\n", *ptry, &ptry);
    printf("\nYour current money is '%.2f', its memory address is '%p'\n", *ptrz, &ptrz);
    
    return 0;
}