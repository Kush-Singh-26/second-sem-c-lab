#include<stdio.h>
void sort(int n, int a[]);
void print(int n , int a[]);
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
printf("Before sorting the elements of the array are :\n");
print(n,a);
sort(n,a);
printf("After sorting the elements of the array are :\n");
print(n,a);
return 0;
}

void sort(int n, int a[]){
int temp =0;
for(int i=0;i<n-1;i++){
	for(int j =0; j<n-i-1;j++){
		if(a[j]> a[j+1]){
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			}
		}
	}
}

void print(int n, int a[]){
for(int i =0; i<n; i++){
	printf(" %d",a[i]);
	}
printf("\n");
}
