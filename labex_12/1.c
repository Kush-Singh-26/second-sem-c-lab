//sum of the elements of integer array using functions
#include<stdio.h>
int sum(int n);
int main(){
int n;
printf("Enter the size of an array : ");
scanf("%d",&n);
printf("Sum of the elements of the array = %d\n",sum(n));
return 0;
}
int sum(int n){
int a[n];
printf("Enter the %d elements : ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
int add = 0;
	for(int i =0 ; i<n ; i++){
		add += a[i];
	}
return add ;
}
