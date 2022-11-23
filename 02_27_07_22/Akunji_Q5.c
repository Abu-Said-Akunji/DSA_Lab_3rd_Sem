/*5.Given an unsorted dynamic array of size n, WAP to find and display 
the numberof elements between two elements a and b (both inclusive).
 E.g. Input :arr = [1, 2, 2, 7, 5, 4], a=2 and b=5, Output : 4 and 
 the numbers are: 2, 2, 5, 4*/


#include<stdio.h>
#include<stdlib.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void Sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
  
int main()
{
    int n, i, a, b, c=0, d=0;

    printf("\nEnter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element-%d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter lower limit element: ");
    scanf("%d", &a);
    printf("Enter upper limit element: ");
    scanf("%d", &b);

    for(i=0; i<n; i++)
    { 
        if(arr[i]==a && arr[i]==b)
        {
            c++;
            d=0;
        }
        if(arr[i]>a && arr[i]<b)
        {
            c++;
        }
    }
    printf("\n\nOutput: %d",c+d);
    int filt_elem[c+d];
    for(int j = 0, i = 0; i < n; i++)
    { 
        if(arr[i]==a && arr[i]==b)
        {
            filt_elem[j] = arr[i];
            j++;
        }
        if(arr[i]>a && arr[i]<b)
        {
            filt_elem[j] = arr[i];
            j++;
        }
    }
    Sort(filt_elem, c+d);
    printf(" and the numbers are: ");
    for(i = 0; i < c+d; i++)
    { 
        printf("%d", filt_elem[i]);
        if(i < c+d-1)
            printf(", ");
    }
    return 0;
}