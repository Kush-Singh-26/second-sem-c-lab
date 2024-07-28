#include<stdio.h>
int main(){
    printf("Enter the array size :");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements : ",n);
    for(int i =0 ; i<n;i++)
        scanf("%d",&a[i]);
    int m;
    printf("Enter the position of the element to be deleted : ");
    scanf("%d",&m);
    printf("Array elements before deletion :");
    for(int i =0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i = m-1;i<n-1;i++)
        a[i]=a[i+1];
    printf("Array elements after deletion :");
    for(int i =0;i<n-1;i++)
        printf("%d ",a[i]);
    printf("\n");

}