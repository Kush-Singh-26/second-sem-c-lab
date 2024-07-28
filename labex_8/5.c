#include<stdio.h>
int main(){
int n,pos,num;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf("Enter the element to be inserted : ");
scanf("%d",&num);
printf("Enter the position of insertion : ");
scanf("%d",&pos);
for(int i =n-1;i>=pos;i--){
	a[i+1]=a[i];
	}
a[pos]=num;
printf("Array elements after insertion: ");
for(int i=0;i<n+1;i++){
	printf("%d  ",a[i]);
	}
printf("\n");
return 0;
}
