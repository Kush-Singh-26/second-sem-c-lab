//WAP to calculate GCD of two numbers by using a recursive function findGCD.
#include<stdio.h>
int findGCD(int,int);
int main(){
    printf("Enter two numbers : ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d = %d\n",a,b,findGCD(a,b));
    return 0;
}

int findGCD(int a,int b){
    if(b == 0)
        return a;
    else if (a == 0)
        return b;
    else 
        return(findGCD(b,a%b));
}
