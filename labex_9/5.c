// WAP to find the standard deviation of a list of numbers.
#include<stdio.h>
#include<math.h>
int main(){
int n;
float total=0,mean =0,sum =0,stdev=0;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
for(int i =0;i<n;i++){
    total+=a[i];
}
mean = total/n;
for(int i =0;i<n;i++){
    sum+=pow(a[i]-mean,2);
}
stdev = sqrt(sum/n);

printf("Standard deviation : %f\n",stdev);


return 0;
}