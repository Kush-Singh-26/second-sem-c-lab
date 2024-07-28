//WAP to extract the first character of each word of a given string (Achromatic string).
#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter a string : ");
    char str[1000];
    gets(str);
    int len = strlen(str);
    printf("First character of each word of the given string: ");
    printf("%c",str[0]);
    for(int i =0; i<len;i++)
        if(str[i] == ' ')
            printf("%c",str[i+1]);
    printf("\n");
    return 0;

}