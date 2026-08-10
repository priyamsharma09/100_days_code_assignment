//Write a program to input two numbers and display their sum, difference, product, and quotient.


#include <stdio.h>


int main() {
    int a,b,sum;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum is: %d", sum);

    return 0;
}
