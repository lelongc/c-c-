#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
// int islower(char c)
// int isupper(char c)
// int isalpha(char c)
// char tolower(char c)
// char toupper(char c)
//int strcmp(char c[])
//int strlen(char c[])
// char* strrev(char c[])
// char* strcpy(char c[],char b[])
//char * strcat(char c[],char b[])
//int atoi(char c[])
// long long atoll(char c[])
int main(){
    char a[100],b[100];
    gets(a);
    gets(b);
    strcat(a,b);
    printf("%s",a);


}