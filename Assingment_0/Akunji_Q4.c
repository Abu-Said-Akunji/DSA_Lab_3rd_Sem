//Q4.WAP to display the array elements in ascending order.
#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter the Elements of the array(Max 50) : ");
    for( i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}