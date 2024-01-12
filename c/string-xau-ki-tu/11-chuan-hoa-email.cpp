#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char c[100],a[100][100];
    gets(c);
    strlwr(c);
    char *token = strtok(c," ");
    
    int n = 0;
    while(token != NULL){
        strcpy(a[n],token);
        n++;
        token = strtok(NULL," ");
    }
    printf("%s",a[n-1]);
    for(int i = 0;i < n-1;i++){
        printf("%c",a[i][0]);
    }
    printf("@gmail.com");

}