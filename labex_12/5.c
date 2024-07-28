#include<stdio.h>
void revArray(int n , int a[]);
void print(int n, int a[]);
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
printf("Orginal array :");
print(n,a);
revArray(n,a);
return 0;
}
void print(int n, int a[]){
for(int i =0; i<n; i++){
	printf(" %d",a[i]);
	}
printf("\n");
}
void revArray(int n, int a[]){
int c;
for(int i=0 ; i<n/2;i++){
	c = a[i];
	a[i] = a[n-1-i];
	a[n-i-1] = c;
	}
	printf("Reverse of the array :");
	print(n,a);
}
