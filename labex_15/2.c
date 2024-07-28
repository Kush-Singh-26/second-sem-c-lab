//WAP to copy one string into another with and without using a library function
#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000];
    printf("Enter the source string : ");
    scanf("%s",str1);
    char str2[1000];
    char str3[1000];
    //Using library functions
    printf("Using library funtions \n");
    strcpy(str2,str1);
    printf("After copying : \n");
    printf("Source string : ");
    puts(str1);
    printf("Destination string : ");
    puts(str2);

    //Without using library function 
    int i =0;
    printf("\nWithout using library function : \n");
    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }
    str3[i] = '\0';
    printf("After copying : \n");
    printf("Source string : ");
    puts(str1);
    printf("Destination string : ");

    puts(str3);

    return 0;
}