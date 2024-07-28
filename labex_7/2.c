#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
int flag =0;
scanf("%d",&n);
for(int i=2;i<n;i++){
	if(n%i == 0){
		printf("%d is not a prime number\n",n);
		flag=1;
		break;
	}
}
if (flag ==0){
	printf("%d is a prime number\n",n);
}
return 0;
}
