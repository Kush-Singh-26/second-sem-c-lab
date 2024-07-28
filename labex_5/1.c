#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 sides of a triangle : ");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a ){
	if(a == b && b == c){
	printf("This is an equilateral triangle.\n");
	}
	else if(a == b || b == c || a == c){
		printf("This is an isosceles triangle.\n");
	}
	else if(((a*a) == (b*b)+(c*c)) || ((b*b) == (a*a)+(c*c)) || ((c*c) == (b*b)+(a*a))){
		printf("This is an right - angled triangle.\n");
	}
	else{
		printf("This is an scalene triangle.\n");
	}
}
else{
	printf("This is not a triangle.\n");
	}
return 0;

}
