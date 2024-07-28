// WAP to sort the elements of an array in ascending order.
#include<stdio.h>
int main(){
int n,temp;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf("Before sorting elements are : ");
for(int i=0; i<n;i++){
	printf("%d ",a[i]);
	}
printf("\n");
for(int i=0;i<n-1;i++){
	for(int j=0; j<n-1-i;j++){
		temp =0;
		if(a[j] > a[j+1]){
			temp =a[j];
			a[j] = a[j+1];
			a[j+1] =temp;
			}
		}
}
printf("After sorting elements are : ");
for(int i=0; i<n;i++){
	printf("%d ",a[i]);
	}
printf("\n");
return 0;
}
