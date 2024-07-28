//WAP to replace all occurrences of a character in a given string with a newcharacter.
#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter a string : ");
    char str[1000];
    char ch1, ch2;
    gets(str);
    printf("Enter the character to be replaced : ");
    scanf(" %c",&ch1);
    printf("Enter the character to be replaced with : ");
    scanf(" %c",&ch2);
    int len = strlen(str);
    for(int i =0;i<len;i++)
        if(str[i] == ch1)
            str[i] = ch2;
    printf("After replacement, string is : ");
    puts(str);
    printf("\n");
    return 0;
}