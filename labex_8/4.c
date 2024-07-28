#include<stdio.h>
int main(){
int n,num,flag=0;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf("Enter the element to search : ");
scanf("%d",&num);
for(int i=0;i<n;i++){
	if(a[i] == num){
		printf("Element %d found at position %d\n",num,i+1);
		flag=1;
		break;
	}
}
if(flag ==0)
	printf("Element %d not found in the array\n",num);
return 0;
}
