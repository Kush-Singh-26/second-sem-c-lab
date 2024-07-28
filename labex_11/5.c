#include<stdio.h>
void SWAP (int a,int b);

int main(){
int a,b;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
SWAP(a,b);
return 0;
}

void SWAP (int a, int b){
printf("Before swapping the two numbers are n1 = %d and n2 = %d\n",a,b);
a = a+b;
b = a-b;
a = a-b;
printf("After swapping the two numbers are n1 = %d and n2 = %d\n",a,b);
}
