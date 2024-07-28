#include<stdio.h>
int main(){
    int n,i=1,a=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (i<n)
    {
        if(i*i == n){
            printf("%d is a perfect square.\n",n);
            a=1;
            break;
        }
        i++;

    }
    if(a==0)
        printf("%d is not a perfect square.\n",n);
    return 0;
}