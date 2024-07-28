// WAP to find out the second largest element stored in an array of integers.
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
printf("Second Largest Element : %d\n",a[n-2]);

return 0;
}
