//9. WAP by designing a recursive function to calculate the sum of all even digits of any given integer.

#include <stdio.h>

int sum_even_digit(int n)
{
    if (n == 0)
       return 0;
    return ((n % 100)/10 + sum_even_digit(n / 100));
}
int main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("The sum of even digits: %d", sum_even_digit(n));
    return 0;
}