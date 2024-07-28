// WAP to count number of digits of a positive integer n by using a recursive function.
#include <stdio.h>
int count(int);
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    printf("Number of digits of %d = %d",n,count(n));
    return 0;
}

int count(int n){
    if (n == 0)
        return 0;
    else
        return 1 + count(n/10);
}