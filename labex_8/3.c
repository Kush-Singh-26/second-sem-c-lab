#include<stdio.h>
int main(){
int n,largest;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
for(int i=0;i<n;i++){
	if(largest<a[i])
		largest = a[i];
	}
printf("Largest element of the array : %d\n",largest);
return 0;
}
