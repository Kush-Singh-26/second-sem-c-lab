// Given an array of non-negative integers and an integer sum, find a sub-
//array that adds to a given sum.
#include<stdio.h>
int main(){
int n,sum,start=0,end=0;
int total=0;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf("Enter the sum : ");
scanf("%d",&sum);
for(int i =0;i<n;i++){
    total=0;
    for(int j=i;j<n;j++){
        total=total+a[j];
        if(total == sum){
            start =i;
            end = j;
            break;
        }
    }
        if(total == sum)
            break;
    
}

printf("Sub array which adds to %d : [",sum);
for(int i=start; i<=end;i++){
	printf("%d ",a[i]);
	}
printf("]\n");
return 0;
}