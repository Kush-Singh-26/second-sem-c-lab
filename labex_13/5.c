//WAP to calculate x^y by writing a recursive user defined function.
#include<stdio.h>
int power(int,int);
int main(){
    int a,b;
    printf("Enter the value of x and y : ");
    scanf("%d%d",&a, &b);
    printf("%d to the power %d = %d\n",a,b, power(a,b));
    return 0;
}
int power(int a , int b){
    if(b == 0)
        return 1;
    else
        return a * power(a,b-1);
}