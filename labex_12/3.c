#include<stdio.h>
void findLargest(int n, int a[]);
void findSmallest(int n , int a[]);
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
findLargest(n,a);
findSmallest(n,a);
return 0;
}
void findLargest(int n, int a[]){
int largest=a[0];
for(int i =0; i<n; i++){
	for(int i = 0; i<n;i++){
		if(largest<a[i]){
			largest = a[i];
		}
	}
}
printf("Largest elememt of the given array : %d\n", largest);
}

void findSmallest(int n, int a[]){
int smallest=a[0];
for(int i =0; i<n; i++){
	for(int i = 0; i<n;i++){
		if(smallest > a[i]){
			smallest = a[i];
		}
	}
}
printf("Largest elememt of the given array : %d\n", smallest);
}
