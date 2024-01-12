#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char *kk(char c[]){
    strlwr(c);
    c[0]=toupper(c[0]);
    return c;
}
char *str_upr(char c[]){
    for(int i = 0;i <strlen(c);i++)
    c[i]=toupper(c[i]);
    return c;
}
int main(){
    char c[100],a[100][100];
    gets(c);
    char *token = strtok(c," ");
    int n =0;
    while(token != NULL){
        strcpy(a[n],token);
        n++;
        token = strtok(NULL," ");
    }
    printf("%s, ",str_upr(a[n-1]));
    for(int i = 0; i < n -1;i++){
        printf("%s ",kk(a[i]));
      
    }
}