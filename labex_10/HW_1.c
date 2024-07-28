//WAP to find the Trace (sum of the diagonal element) of a given n×n Matrix
#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter the row or column size of the matrix : ");
scanf("%d", &n);
int a[n][n];
printf("Enter the elements of matrix \n");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]); 
	}
}

printf("Matrix :\n");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("%d ",a[i][j]); 
    }
    printf("\n");
}   
for(int i =0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i == j){
            sum += a[i][j];
        }
        }
    }

    printf("Sum of the diagonal elements : %d\n",sum);
    return 0;


}