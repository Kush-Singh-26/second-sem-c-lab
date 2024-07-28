#include<stdio.h>
int factorial (int a);

int main(){
int a;
printf("Enter a number : ");
scanf("%d",&a);
printf("Factorial of %d = %d\n",a,factorial(a));
return 0;
}

int factorial(int a){
int f =1;
for(int i=1 ; i<=a ; i++){
	f *= i;
	}
return f;
}
