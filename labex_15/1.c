//WAP to find the length of a string with and without using a library function.
#include<stdio.h>
#include<string.h>
int main(){
    //Without Using Library Functions 
    printf("Without Using Library Functions\n"); 
    printf("Enter a string :");
    char str[1000];
    scanf("%s",str);
    int i =0;
    while(str[i] != '\0')
        ++i;
    printf("Lenght of string = %d\n",i);
    //Using Library Functions 
    printf("\nUsing Library Functions\n"); 
    printf("Lenght of string = %d",strlen(str));
    return 0;
}