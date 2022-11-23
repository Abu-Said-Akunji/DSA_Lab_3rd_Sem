//Q6: WAP in c to search a particular element.


#include <stdio.h>
int main()
{
    int array[100], element, position, c, n;    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter the element which you wish to search: ");
    scanf("%d", &element);
    for(int i = 0; i < n; i++)
    {
        if(element == array[i])
        {
            position = i + 1;
        }
    }
    printf("\n%d is present position: %d ", element, position);
    return 0;
}