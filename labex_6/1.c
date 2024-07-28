#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
printf("Even numbers within range %d and %d are : ",a,b);
for(int i=a; i<=b; i++){
	if(i%2 ==0)
		printf("%d  ",i);
}
printf("\n");
return 0;
}
