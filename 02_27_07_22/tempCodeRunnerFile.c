//3.WAP to search an element in a dynamic array of n numbers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n, i, element, count = 0;
    printf("\nEnter the number of elements in Array: ");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("Enter %d Numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("The inputed Array: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",*(p+i));
    }
    printf("\nEnter the element you waant to search: ");
    scanf("%d", &element);
    for(int j= 0; j < n; j++)
    {
        if(*(p + j) == element)
        {
            printf("\n%d is present at position-%d", element, j+1);
            count += 1;
        }
    }
    if(count == 0) 
        printf("\n%d is not in the Array", element);
    return 0;
}