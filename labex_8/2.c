#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
for(int i=0;i<n;i++){
	sum+=a[i];
	}
printf("Sum of the elements of the array : %d\n",sum);
return 0;
}
