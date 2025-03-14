//Write a program in C to add two numbers using pointers.
#include <stdio.h>

int main() 
{
    int fno, sno, *x, *y, sum;  // Declare integer variables fno, sno, sum, and integer pointers x, y

    printf("\n\n Pointer : Add two numbers :\n");
    printf("--------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d", &fno);  // Read the first number from the user

    printf(" Input the second number : ");
    scanf("%d", &sno);  // Read the second number from the user

    x = &fno;  // Assign the address of fno to the pointer x
    y = &sno;  // Assign the address of sno to the pointer y

    sum = *x + *y;  // Dereference x and x to get the values and calculate their sum

    printf(" The sum of the entered numbers is : %d\n\n", sum);  // Print the sum of the entered numbers

    return 0;
}