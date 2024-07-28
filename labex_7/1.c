#include<stdio.h>
#include<math.h>
int main(){
int x,n;
printf("Enter the value of x and n : ");
scanf("%d%d",&x,&n);
int num = pow(x,n);
float f=1;
for (int i=n;i>=1;i--){
	f=f*i;
	}
float result = num/f;
printf("%d to the power %d divided by %d! = %f\n",x,n,n,result);
return 0;
}
