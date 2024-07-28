//WAP to find out the transpose of a given matrix
#include<stdio.h>
int main(){
int row,col;
printf("Enter the row and column size of the matrix : ");
scanf("%d%d", &row, &col);
int a[row][col];
printf("Enter the elements of matrix \n");
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		scanf("%d",&a[i][j]); 
	}
}

printf("Matrix :\n");
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		printf("%d ",a[i][j]); 
	}
	printf("\n");
}
printf("Transpose of the given Matrix:\n");
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		printf("%d ",a[j][i]); 
	}
	printf("\n");
}
return 0;
}
