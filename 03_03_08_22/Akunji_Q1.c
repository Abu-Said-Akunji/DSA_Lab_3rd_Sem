//1. WAP to calculate x^y(x power y) by writing a function(say POWER) for it.

#include<stdio.h>
int POWER(int base, int power)
{
    int result = 1;
    for(int i = 0; i < power; i++)
        result *= base;
    return result;
}

int main()
{
    int base, power;
    printf("\nEnter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);
    printf("Result: %d", POWER(base, power));
    return 0;
}