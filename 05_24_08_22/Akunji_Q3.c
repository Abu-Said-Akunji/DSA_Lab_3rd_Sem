/*Q3. WAP to read two polynomial and perform their multiplication using 1D array.*/

// Q1. WAP to read two polynomial and perform their addition using 1D array.

#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, m, n, cnt = 0;
    for (i = 0; i <= 9; i++)
        a[i] = 0;
    for (i = 0; i <= 9; i++)
        b[i] = 0;
    printf("\nEnter the order of first Polynomial: ");
    scanf("%d", &m);
    printf("Enter the Co - efficient: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the order of Second Polynomial: ");
    scanf("%d", &n);
    printf("Enter the Co-efficient: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    if (m >= n)
    {
        for (i = 0; i < m; i++)
        {
            c[i] = a[i] + b[i];
            cnt++;
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            c[i] = a[i] + b[i];
        }
    }
    printf("\n\nADDed POLYNOMIAL IS: \nA = ");
    for (i = cnt - 1; i > 0; i--)
    {
        printf("%dx^%d + ", c[i], i);
    }
    printf("%d", c[i]);
    return 0;
}