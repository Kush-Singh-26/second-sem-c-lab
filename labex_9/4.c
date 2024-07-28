// WAP to find the median of a list of numbers stored in an array.
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
float median = (a[(n-1)/2]);
if(n%2 ==0)        
	printf("Median of the given array : %f\n",((median+(median+1))/2));
else
	printf("Median of the given array : %f\n",median);
return 0;
}
