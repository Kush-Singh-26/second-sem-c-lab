#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers : ");
scanf("%d%d",&a, &b);
int *p = &a;
int *q = &b;
int c = (*p)*(*q);
printf("Product of %d and %d = %d\n",a,b,c);
return 0;
}

	
