#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char c[100],a[100][100];
    char k[100];
    gets(c);
    scanf("%s",k);
    getchar();
    char *tok=strtok(c," ");
    int n = 0;
    while(tok != NULL){
        strcpy(a[n++],tok);
        tok = strtok(NULL," ");
        
    }
    for(int i = 0;i <n;i++){
        if(strcmp(k,a[i])!=0)printf("%s ",a[i]);
    }
    
}
