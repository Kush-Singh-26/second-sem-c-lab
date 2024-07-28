#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int f=1;
for(int i=n;i>=1;i--){
	f=f*i;
}
printf("Factorial of %d = %d\n",n,f);

return 0;
}
