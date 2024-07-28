//WAP to compare two string with and without using a library function
#include<string.h>
#include<stdio.h>
int main(){
    char str1[1000];
    char str2[1000];
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    int len1 = strlen(str1), len2 = strlen(str2), minlen, flag=0;
    if (len1>len2 || len1 == len2)
        minlen = len2;
    else
        minlen = len1;
    for(int i =0;i<minlen;i++){
        if(str1[i] > str2[i]){
            flag =1;
            break;
        }
        else if(str1[i] < str2[i]){
            flag = -1;
            break;
        }
        else
            flag =0;
    }

    printf("\nWithout using library functions :\n");
    if(flag == 1)
        printf("In the alphabetical order first string will be after the second string.\n");
    else if(flag == -1)
        printf("In the alphabetical order first string will be before the second string.\n");
    else
        printf("Both strings are same.\n");

    printf("\nUsing Library functions :\n");
    int comp = strcmp(str1,str2);
    if(comp >0)
         printf("In the alphabetical order first string will be after the second string.\n");
    else if(comp == 0)
        printf("Both strings are same.\n");
    else
        printf("In the alphabetical order first string will be before the second string.\n");
    return 0;
}