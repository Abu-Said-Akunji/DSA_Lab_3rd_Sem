//Q2: WAP in c to insert an element into the array at any position


#include <stdio.h>
 
int main()
{
    int array[100], array_temp[100], position, c, n, value;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter the position where you wish to insert an element: ");
    //Insert the position that you want to insert an element not index
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for(c = 0; c < position-1; c++ )
        array_temp[c] = array[c];
    array_temp[position-1] = value;
    for(c = position; c <= n; c++)
        array_temp[c] = array[c-1];
    for(c = 0; c <= n; c++ )
        array[c] = array_temp[c];
    printf("Final array is: ");
    for (c = 0; c <= n; c++)
        printf("%d, ", array[c]);
    return 0;
}