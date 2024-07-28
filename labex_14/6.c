//WAP to sort an integer array using pointer.
#include<stdio.h>
void sort(int *a, int n);
int main(){
    printf("Enter the array size : ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : ");
    for(int i =0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting the elements of the array are : ");
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    sort(a,n);
    printf("After sorting the elements of the array are : ");
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

void sort(int *a, int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(a+j) > *(a+j+1)){
                int temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
}