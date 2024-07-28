// Given an array of integers of size n and an integer d, the task is to rotate the
// array elements to the left by d positions.
#include<stdio.h>
int main(){
    int n,d;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements ",n);
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the value od d : ");
    scanf("%d",&d);

    return 0;
}