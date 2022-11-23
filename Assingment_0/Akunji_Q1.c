//Q1.WAP to create an array that can store max. 50 integers and display the contents of the array

#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter the Elements of the array(Max 50) : ");
    for( i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

