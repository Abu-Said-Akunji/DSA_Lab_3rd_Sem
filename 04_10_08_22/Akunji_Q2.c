//WAP to find out the second smallest and second largest element stored in a dynamic array.

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d", (arr+i));
    }
    for(int i=0;i<n;i++)
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if((arr+i)<(arr+j))
            {
                temp= *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) =temp;
            }
        }
    }
    printf("The second smallest element is: %d", *(arr+n-2));
    printf("\n");
    printf("The second largest element is: %d", *(arr+1));
    return 0;
}