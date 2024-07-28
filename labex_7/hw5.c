#include<stdio.h>
int main(){
int n,num,d;
int sum=0;
printf("Enter a number : ");
scanf("%d",&n);
num=n;
while(num>0){
	d=num%10;
	sum=sum+(d*d*d);
	num/=10;
	}
if (sum == n)
	printf("%d is an armstrong number.\n",n);
else
	printf("%d is not a armstrong number.\n",n);
return 0;
}
