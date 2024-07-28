// WAP Given an array A of n elements. Find the majority element inthearray. A
// majority element in an array A of size n is an element that appears more than
// n/2 times in the array.
#include<stdio.h>
int main(){
    int n,maxvalue;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements ",n);
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int maxcount =0;
        for(int j =0;j<n;j++){
            if(a[i] == a[j])
                maxcount += 1;
        }
        if (maxcount>n/2){
            maxvalue = a[i];
            break;
        }
    }

    printf("Majority element : %d\n",maxvalue);


    return 0;
}