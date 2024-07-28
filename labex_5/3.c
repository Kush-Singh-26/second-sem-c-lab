#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
printf("Input the values for a,b and c: ");
scanf("%d%d%d",&a,&b,&c);
int d = (b*b)-(4*a*c);
float x1 = ((b*-1) + sqrt(d))/(2*a);
float x2 = ((b*-1) - sqrt(d))/(2*a);
if((a==0 && b==0) || a==0)
	printf("No solution\n");
else if(d ==0)
	printf("The roots are real and equal. Root is %f\n",x1);
else if(d<0)
	printf("Roots are imaginary\n");
else
	printf("The roots are real and unequal. Roots are %f anf %f\n",x1,x2);

return 0;
}
