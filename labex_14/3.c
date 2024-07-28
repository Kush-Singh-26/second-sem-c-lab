// WAP to compute the sum of all elements in an array using pointer.
#include<stdio.h>
int add(int *a,int n);
int main(){
    printf("Enter the array size : ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Sum of the elements of the array : %d",add(a,n));
    return 0;
}

int add(int *a,int n){
    int sum = 0;
    for(int i =0; i<n; i++){
        sum += *(a+i);
    }
    return sum;
}