// WAP to transpose a 2D Matrix Using Pointers.
#include<stdio.h>
void transpose(int *a, int row, int col);
int main(){
    int row,col;
    printf("Enter the number of rows of matrix : ");
    scanf("%d",&row);
    printf("Enter the number of columns of matrix : ");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter the elements of the matrix (row major order) : ");
    for(int i = 0 ; i<row;i++){
        for(int j = 0; j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Given Matrix : \n");
    for(int i =0; i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    transpose(&a[0][0], row, col);
    printf("Transpose of given Matrix : \n");
    for(int i =0; i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void transpose(int *a, int row, int col){
    for(int i =0;i<row;i++){
        for(int j =i+1 ; j<col; j++){
            
                int temp = *((a+i*col)+j);
                *((a+i*col)+j) = *((a+j*col)+i);
                *((a+j*col)+i) = temp;
        }
    }

}