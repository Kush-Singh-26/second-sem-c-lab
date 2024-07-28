#include<stdio.h>
int main(){
int row, sum=0;
printf("Enter the row or column size of the matrix : ");
scanf("%d", &row);
int a[row][row];
printf("Enter the elements of matrix \n");
for(int i=0;i<row;i++){
	for(int j=0;j<row;j++){
		scanf("%d",&a[i][j]); 
	}
}

printf("Matrix :\n");
for(int i=0;i<row;i++){
	for(int j=0;j<row;j++){
		printf("%d ",a[i][j]); 
	}
	printf("\n");
}

for(int i=0;i<row;i++){
	for(int j=0;j<row;j++){
		if(i >= j)
			sum += a[i][j]; 
	}
}
printf("Sum of the upper triangular matrix : %d\n",sum);
return 0;
}