#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int cmp(char c[], char b[]){
    int n1 =strlen(c);
    int n2 =strlen(b);
    if(n1!=n2)return 0;
    for(int i = 0;i < n1;i++){
        if(tolower(c[i])!=tolower(b[i]))return 0;
    }
    return 1;
}

int main(){
    char c[100],l[100][100];
    gets(c);
    char k[100];
    scanf("%s",k);
    getchar();
    char *tok=strtok(c," ");
    int n = 0;
    while(tok!=NULL){
        if(cmp(tok,k)==0){
           
            printf("%s ",tok);
            
        }
        tok = strtok(NULL," ");
    }
    


}