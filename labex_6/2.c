#include<stdio.h>
int main(){
int total=0,num;
printf("Enter 10 integers: ");
for(int i =1; i<=10;i++){
	scanf("%d",&num);
	total = total + num;
}
float avg = total/10;
printf("The sum is %d, The average is %f\n",total,avg);

return 0;
}
	
