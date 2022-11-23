//Q5: WAP in c to find the occurrence  of an element.


#include <stdio.h>
int main()
{
    int array[100], element, count = 0, c, n;   
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter the element which you wish to count: ");
    scanf("%d", &element);
    for(int i = 0; i < n; i++)
    {
        if(element == array[i])
        {
            count += 1;
        }
    }
    printf("\n%d is present %d time in the given array", element, count);
    return 0;
}