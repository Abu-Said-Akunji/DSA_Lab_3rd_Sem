/*Q2. IMPLEMENT OPTIMIZED BUBBLE SORT.*/

#include <stdio.h>
void bubble_sort(int arr[], int n);
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {12, 46, 34, 80, 10, 9, 28};
    int n = 7;
//sizeof(arr) / sizeof(arr[0])
    printf("\nInput Array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    bubble_sort(arr, n);

    printf("\nSorted Array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}