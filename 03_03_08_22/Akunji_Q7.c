//7.WAP to find out the sum of n elements of an integer array a[] by using recursion.

#include<stdio.h>

int sum_elements(int arr[], int N)
{
    if (N <= 0)
    {
        return 0;
    }
    return (sum_elements(arr, N - 1) + arr[N - 1]);
}
int main()
{
   int n;
    printf("Enter number of elements you wanna add: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum of %d elements: %d\n", n, sum_elements(arr, n));
    return 0;
}