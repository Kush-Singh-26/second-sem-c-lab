//WAP to print the elements of upper triangular matrix
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
printf("Upper Triangular Matrix : \n");
for(int i=0;i<row;i++){
	for(int j=0;j<row;j++){
		if(i <= j)
			printf("%d ",a[i][j]);
        else
            printf("  ");
	}
    printf("\n");
}
return 0;
}