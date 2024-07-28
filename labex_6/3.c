#include<stdio.h>
int main(){
int n,digit;
int total=0;
printf("Enter a number : ");
scanf("%d",&n);
int num = n;
while (num>0)
{
	digit=num%10;
	total=total+digit;
	num=num/10;
}
printf("Sum of digits of %d = %d",n,total);
return 0;
}
