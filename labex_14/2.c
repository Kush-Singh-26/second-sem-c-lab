/*WAP to swap three numbers in cyclic order using Call by Reference. In
other words, WAP to read three numbers and store them in three
variables a, b, c. Rotate the values stored in a, b, c so that value of a
will go to b, value of b will go to c and value of c will go to a.*/
#include <stdio.h>
void swap(int *a, int *b, int *c);
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before swapping the numbers are : a = %d, b = %d, c = %d\n",a,b,c);
    swap(&a, &b, &c);
    printf("After swapping the numbers are : a = %d, b = %d, c = %d\n",a,b,c);
    return 0;
}

void swap(int *a, int *b, int *c){
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

