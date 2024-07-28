// WAP by designing a recursive function to print the prime factors of a number
#include<stdio.h>
void primeFactors(int , int);
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    printf("Prime factors of %d are : ",n);
    primeFactors(n,2);
    printf("\n");
    return 0;
}
void primeFactors(int n, int factor){
    if (n % factor == 0){
        printf("%d ",factor);
        primeFactors(n/factor,factor);
    }
    else{
        primeFactors(n,factor+1);
    }

}

