//Q2.WAP to find out the sum of the numbers stored in an array of integers.

#include<stdio.h>

int main()
{
    int n,i,sum;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter the Elements of the array(Max 50) : ");
    for( i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum + arr[i];
    }
    printf("\nthe sum of the integers of the array is = %d ", sum);
    return 0;
}

