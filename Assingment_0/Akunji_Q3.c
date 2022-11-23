// Q3.WAP to find largest element stored in an array.
#include<stdio.h>

int main()
{
    int n,i,large_num;
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter the Elements of the array(Max 50) : ");
    for( i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    large_num=0;
     for( i=0; i < n; i++)
    {
        if(large_num < arr[i])
        {
            large_num = arr[i];
        } 
    }
    printf("The Largest number of elements : %d" ,large_num);
    return 0;
}