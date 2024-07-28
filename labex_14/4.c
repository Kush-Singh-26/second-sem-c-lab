//WAP to reverse a 1D Array Using Pointers.
void reverse(int *a, int n);
#include<stdio.h>
int main(){
    printf("Enter the array size : ");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    printf("Reverse of the given array : ");
    for(int i =0;i<n;i++){
        printf(" %d",a[i]);
    }

    return 0;
}

void reverse(int *a, int n){
    for(int i =0; i<n/2; i++){
        int temp = *(a+i);
        *(a+i) = *(a+n-i-1);
        *(a+n-i-1) = temp;
    }
}
