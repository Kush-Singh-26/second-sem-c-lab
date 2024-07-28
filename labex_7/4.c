#include<stdio.h>
int main(){
int n,total1=0;
printf("Enter the value of n : ");
scanf("%d",&n);
for(int i=1;i<=n; i++){
	int total =0;
	for(int j=1;j<=i;j++){
		total=total+j;
			}
	total1=total1+total;
}
printf("Sum of the series : %d\n",total1);
return 0;
}
