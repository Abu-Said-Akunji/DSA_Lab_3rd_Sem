//Q4: WAP in c to delete a particular element.


#include <stdio.h>
int main()
{
    int array[100], element, position, c, n;    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d number of elements in array: ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter the element which you wish to delete: ");
    scanf("%d", &element);
    for(int i = 0; i < n; i++)
    {
        if(element == array[i])
        {
            position = i;
        }
    }
    if (position >= n+1)
       printf("Deletion not possible.\n");
    else
    {
        for (c = position; c < n - 1; c++)
            array[c] = array[c+1];
        printf("Resultant array: "); 
        for (c = 0; c < n - 1; c++)
            printf("%d, ", array[c]);
    }
    return 0;
}