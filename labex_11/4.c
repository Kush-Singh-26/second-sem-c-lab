#include<stdio.h>
void isPrime (int a);

int main(){
int a;
printf("Enter a number : ");
scanf("%d",&a);
isPrime(a);
return 0;
}

void isPrime (int a){
int flag =0;
for(int i =2 ; i<a ; i++){
		if(a % i == 0)
			{
			printf("%d is not a prime number.\n",a);
			flag =1;
			break;
			}
		}
		if(flag == 0)
			{
			printf("%d is a prime number.\n",a);
			}

}
