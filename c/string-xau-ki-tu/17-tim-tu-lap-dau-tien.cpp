#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    char c[100],k[100][100];
    gets(c);
    int n =0, ok =0;
    char *tok = strtok(c," ");
    while (tok != NULL)
    {   strcpy(k[n],tok);
        for(int i = 0;i < n;i++){
            if(strcmp(tok,k[i])==0){
                ok=1;
                break;
            }
        }
        if(ok==1){
            printf("%s",tok);
            break;
        }
        tok = strtok(NULL," ");
        n++;
    }
    if(!ok)printf("-1");
    
    
}