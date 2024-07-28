#include<stdio.h>
int sumDigits (int a);

int main(){
int a;
printf("Enter a number : ");
scanf("%d",&a);
printf("Sum of the digits of %d = %d\n",a,sumDigits(a));
return 0;
}

int sumDigits (int a){
int sum = 0;
int num = a;
while(num>0){
	sum += num%10;
	num = num/10;
}
return sum;
}
