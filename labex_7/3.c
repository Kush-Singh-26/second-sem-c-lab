#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
printf("Series : 0");
int i =1;
while (i<n){
	printf(", %d",i);
	i=i*2+1;
}
printf("\n");
return 0;
}
