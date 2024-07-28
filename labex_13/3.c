//WAP by designing a recursive function to calculate the sumof the digits
//of any given integer.
#include<stdio.h>
int sumDigits(int);
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    printf("Sum of the digits of %d = %d\n",n,sumDigits(n));
    return 0;
}

int sumDigits(int n){
    if(n == 0)
        return 0;
    else
        return n%10 + sumDigits(n/10);
}