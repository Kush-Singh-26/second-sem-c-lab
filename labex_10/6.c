// WAP to find the sum of rows and columns of a matrix.
#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the row and column size of the matrix : ");
    scanf("%d%d", &row, &col);
    int a[row][col];
    printf("Enter the elements of matrix \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("    ");
    for (int i = 0; i <= row-1; i++)
    {
        printf("   ");
    }
    printf("ROW SUM\n");
    printf("   ");
    for (int i = 0; i < row; i++)
    {
    int sum =0;
    for (int j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
            sum += a[i][j];
        }
        printf("|  %d\n   ",sum);
    }
    for(int i=0;i< row;i++){
        printf("___");
    }
    printf("|\n");
    printf("COL\n");
    printf("SUM ");
    for (int i = 0; i < row; i++)
    {
    int sum =0;
    for (int j = 0; j < col; j++)
        {
            sum += a[j][i];
        }
        printf("%d  ",sum);
    }
    return 0;
}