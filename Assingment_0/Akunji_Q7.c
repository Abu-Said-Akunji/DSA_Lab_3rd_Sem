//Q7.WAP to find the Trace(sum of the diagonal element) of a given mxn matrix.
#include <stdio.h>
int main()
{
    int row, col,n,r,c;
    int A[50][50];
    printf("\nEnter the size of row :");
    scanf("%d",&r);
    printf("\nEnter the size of coloumn :");
    scanf("%d",&c);
    printf("Enter elements in matrix A : \n");
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    int sum=0;
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            if(row==col)
            {
                sum=sum+A[row][col];
            }
        }
    }
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
    return 0;
}