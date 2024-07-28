//WAP to multiply two matrices and display it.
#include<stdio.h>
int main(){
int row1,col1,row2,col2;
printf("Enter the row and column size of the matrix 1 : ");
scanf("%d%d", &row1, &col1);
printf("Enter the row and column size of the matrix 2 : ");
scanf("%d%d", &row2, &col2);
int a[row1][col1];
printf("Enter the elements of matrix 1\n");
for(int i=0;i<row1;i++){
	for(int j=0;j<col1;j++){
		scanf("%d",&a[i][j]); 
	}
}
int b[row2][col2];
printf("Enter the elements of matrix 2\n");
for(int i=0;i<row2;i++){
	for(int j=0;j<col2;j++){
		scanf("%d",&b[i][j]); 
	}
}
printf("Matrix 1:\n");
for(int i=0;i<row1;i++){
	for(int j=0;j<col1;j++){
		printf("%d ",a[i][j]); 
	}
	printf("\n");
}
printf("Matrix 2:\n");
for(int i=0;i<row2;i++){
	for(int j=0;j<col2;j++){
		printf("%d ",b[i][j]); 
	}
	printf("\n");
}
int c[row1][col2];
for(int i=0;i<row1;i++){
	for(int j=0;j<col2;j++){
		c[i][j] = 0;
		for(int k=0;k<row1;k++){
			c[i][j] += a[i][k] * b[k][j];
		} 
	}
}
printf("Product of Matrix 1 and Matrix 2:\n");
for(int i=0;i<row1;i++){
	for(int j=0;j<col2;j++){
		printf("%d ",c[i][j]); 
	}
	printf("\n");
}
return 0;
}
