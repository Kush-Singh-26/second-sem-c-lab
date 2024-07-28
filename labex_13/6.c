//Write a recursive function to search an element in an array using Linear Search.
#include<stdio.h>

int LinearSearch(int a[],int n,int s,int i);
int main(){
    printf("Enter the size of the array : ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements : ");
    for(int i =0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the search element : ");
    int s;
    scanf("%d",&s);
    int index = LinearSearch(a,n,s,0);
    if(index == 0)
        printf("Element not found\n");
    else
        printf("Element found at index : %d",index);
    return 0;
}

int LinearSearch(int a[],int n,int s,int i){
    if(a[i] == s)
        return i;
    else if (i>=n)
        return 0;
    else 
        return LinearSearch(a,n,s,i+1);
        
}

