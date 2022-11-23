//3.WAP to count number of digits of a positive integer n by using recursion.

#include<stdio.h>
int count_digit(int num)
{
    static int count=0;
    if(num!=0)
    {
        count++;
        count_digit(num/10);
    }
    return count;
}
int main()
{
    int n;
    printf("\nEnter the number you want to count the digit of: ");
    scanf("%d",&n);
    printf("There's %d digits in the Given Number.", count_digit(n));
    return 0;
}