//WAP to find the reverse of a string with and without using a library function.
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    char str1[1000];
    printf("Enter a string : ");
    scanf("%s",str);
    strcpy(str1,str);
    //without library function 
    printf("\nWithout using library function\n");
    int i =0;
    while(str[i] != '\0')
        ++i;
    for(int j=0;j<i/2;j++){
        int temp = str[i-j-1];
        str[i-1-j] = str[j];
        str[j] = temp;
    }
    printf("Reverse of the given string : ");
    puts(str);
    printf("\n");
    
    //Usin library function

    printf("Using Library function : \n");
    printf("Reverse of the given string : ");
    puts(strrev(str1));
    printf("\n");


    return 0;
}