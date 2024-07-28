//WAP to read a matrix and find the sum of the elements of that matrix
#include<stdio.h>
int main(){
int row , col, sum=0;
printf("Enter the row and column size of the matrix : ");
scanf("%d%d", &row, &col);
printf("Enter the elements of the matrix of order : %d*%d\n",row,col);
int a[row][col];
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		scanf("%d",&a[i][j]); 
	}
}
for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){
		sum += a[i][j];
	}
}                         
printf("Sum of the elemnts of the matrix : %d\n",sum);
return 0;
}
