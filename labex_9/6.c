//WAP to merge the contents of two sorted arrays and store it into a third array.
#include<stdio.h>
int main(){
int n,m,f1=0,f2=0,i=0;
printf("Enter the first array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf("Enter the second array size: ");
scanf("%d",&m);
int b[m];
printf("Enter %d elements: ",m);
for(int i=0;i<m;i++){
	scanf("%d",&b[i]);
	}

printf("First Array : ");
for(int i=0; i<n;i++){
	printf("%d ",a[i]);
	}
printf("\n");

printf("Second Array : ");
for(int i=0; i<m;i++){
	printf("%d ",b[i]);
	}
printf("\n");

int c[m+n];
for(i; f1<n || f2<m ;i++){
	if(a[f1]>b[f2]){
		c[i]=b[f2];
		f2+=1;
	}
	else{
		c[i]=a[f1];
		f1+=1;
	}
}
for(int j = f1;j<n;i++){
	c[i]=a[f1];
}
for(int j = f2;j<m;i++){
	c[i]=a[f2];
}
printf("Merged Array : ");
for(int i=0; i<n+m;i++){
	printf("%d ",c[i]);
	}
printf("\n");

return 0;
}