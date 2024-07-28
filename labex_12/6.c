#include<stdio.h>
void readArr(int a[], int n);
void dispArr(int n, int a[]);
void mulArr(int a[], int b[], int c[],int n);
int main(){
int n;
printf("Enter the size of the arrays : ");
scanf("%d",&n);
int a[n];
int b[n];
int c[n];
printf("Enter the elements of the first array: \n");
readArr(a,n);
printf("Enter the elements of the second array: \n");
readArr(b,n);
printf("First array\n");
dispArr(n,a);
printf("Second array\n");
dispArr(n,b);
mulArr(a,b,c,n);
printf("Product of the first and second array : ");
dispArr(n,c);
return 0;
}
void readArr(int a[], int n){
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
}
void dispArr(int n, int a[]){
for(int i =0; i<n; i++){
	printf(" %d",a[i]);
	}
	printf("\n");
}
void mulArr(int a[], int b[], int c[],int n) {
   for (int i = 0; i < n; i++) {
       c[i] = a[i] * b[i];
   }

}