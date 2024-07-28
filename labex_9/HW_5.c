#include<stdio.h>
int main(){
    printf("Enter the array size :");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements : ",n);
    for(int i =0 ; i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Before swapping elements are : ");
    for(int i =0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i =0;i<n-1;i+=2){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }

    printf("After swapping elements are : ");
    for(int i =0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}