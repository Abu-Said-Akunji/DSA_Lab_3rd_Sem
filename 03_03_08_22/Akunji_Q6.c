//6. WAP to test whether a number num (num is entered through keyboard) is a number in the Fibonacci sequence or not.

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isSquare(int n)
{
    int s = sqrt(n);
    return (s * s == n);
}
bool isFibonacci(int num)
{
    return isSquare(5 * num * num + 4)
           || isSquare(5 * num * num - 4);
}
int main()
{
    int num;
    printf("\nEnter the integer you want to check: ");
    scanf("%d", &num);
    if (isFibonacci(num))
        printf("\nYes, %d is a Fibonacci Number. \n", num);
    else
        printf("\nNo, %d is a not Fibonacci Number. \n", num);
    return 0;
} 