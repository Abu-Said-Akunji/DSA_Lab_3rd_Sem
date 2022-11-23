//4. WAP to find the first digit of a number using function. Example : if the number is 1234. output is 1.

#include<stdio.h>
int first_digit(int number)
{
    while (1)
    {
        number = number/10;
        if(number <= 9)
            break;
    }
    return number;
}
int main()
{
    long int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The first digit of the Given Number is: %d", first_digit(n));
    return 0;
}