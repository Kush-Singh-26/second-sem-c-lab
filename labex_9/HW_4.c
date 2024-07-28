#include<stdio.h>
int main(){
    printf("Enter the array size :");
    int n,i;
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int large = -1;
    for(i=0;i<n;i++)
        if(a[i]%2 == 0 && a[i]>large)
            large = a[i];
    printf("Largest even number of the array : %d",large);
    return 0;
}