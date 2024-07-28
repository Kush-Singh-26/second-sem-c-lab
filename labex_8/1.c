#include<stdio.h>
int main(){
int n;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf("Elements of the array are: ");
for(int i=0;i<n;i++){
	printf("%d  ",a[i]);
	}
printf("\n");
return 0;
}
