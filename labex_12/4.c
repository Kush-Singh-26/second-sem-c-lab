#include<stdio.h>
int isPrime(int n);
void primeSum(int n , int a[]);
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
primeSum(n,a);
return 0;
}
int isPrime(int n){
int flag = 0;
	for(int i = 2; i<n; i++){
		if(n % i == 0){
			flag =1;
			break;
		}
	}
if (flag == 1){
	return 0;
}
}

void primeSum(int n , int a[]){
int sum =0;
for(int i =0 ; i<n;i++){
	if( isPrime(a[i])){
		sum += a[i];
	}
}
printf("Sum of the prime numbers present in the given array : %d\n",sum);
}	
