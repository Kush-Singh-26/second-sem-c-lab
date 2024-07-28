// Given an integer array, find the peak element in it. A peak element is an
// element that is greater than its neighbors. There might be multiple peak
// elements in an array, and the solution should report all peak elements.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements ",n);
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Peak elements are : ");
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1])
            printf("%d ",a[i]);
    }

    printf("\n");
    return 0;
}