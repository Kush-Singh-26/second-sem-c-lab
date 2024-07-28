//WAP to check whether a matrix is identity matrix or not.
#include<stdio.h>
int main(){
int row,col,f1=0,f2=0;
printf("Enter the row and column size of the matrix : ");
scanf("%d%d", &row, &col);
int a[row][col];
printf("Enter the elements of matrix \n");
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		scanf("%d",&a[i][j]); 
	}
}
for(int i =0;i<row;i++){
    for(int j=0;j<col;j++){
        if( (i == j) && a[i][j] != 1 ){
            f1 =1;
            break;
        }
    }
}
for(int i =0;i<row;i++){
    for(int j=0;j<col;j++){
        if( (i != j) && a[i][j] != 0 ){
            f2 =1;
            break;
        }
    }
}
if( f1 == 0 && f2 ==0)
    printf("Given matrix is an identity matrix\n");
else
    printf("Given matrix is not an identity matrix\n");
return 0;
}