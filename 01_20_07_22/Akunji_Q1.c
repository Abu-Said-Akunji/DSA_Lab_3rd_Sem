//Q1: WAP in  c to create an array and display the reverse of that array


#include <stdio.h>

int main()
{
    int n = 6;
    int arr[] = {5, 7, 4, 3, 1, 9};
    printf("Inputed Array: ");
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("\nReversed Array: ");
     for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
}