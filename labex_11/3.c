#include<stdio.h>
int fibonacci (int a);

int main(){
int a;
printf("Enter the value of n : ");
scanf("%d",&a);
printf("%d term of the Fibonacci Sequence is %d\n",a,fibonacci(a));
return 0;
}

int fibonacci (int a){
int f =0;
int m = 0;
int n = 1;
for(int i=2 ; i<=a-1; i++){
	f = m+n;
	m=n;
	n=f;
	}
return f;
}
