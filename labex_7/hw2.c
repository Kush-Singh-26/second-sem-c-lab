#include<stdio.h>
int main(){
int a,b,i;
printf("Enter a range : ");
scanf("%d%d",&a,&b);
printf("Prime numbers within range %d and %d are : ",a,b);
for(i=a;i<=b;i++){
	int flag =0;
	for(int j=2;j<i;j++){
		if(i%j == 0)
			flag=1;
			break;
		}
	if (flag ==0){
		printf("%d ", i);
	}
}
printf("\n");
return 0;
}


