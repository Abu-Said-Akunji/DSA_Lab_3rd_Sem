#include <stdio.h>
int main()
{
    int row, col,n;
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    int A[n][n];
    int B[n][n];
    int C[n][n];
    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\nEnter elements in matrix B of size 3x3: \n");
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }
    printf("\nSum of matrices A+B = \n");
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
    return 0;
}