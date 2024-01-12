#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void sx(char c[][100],int n){
    for(int i = 0;i < n;i++ ){
        int m  = i;
        for(int j = i+1; j < n;j++){
            if(strcmp(c[m],c[j])>0)m = j;
        }
        char tmp[100]={0};
        strcpy(tmp,c[m]);
        strcpy(c[m],c[i]);
        strcpy(c[i],tmp);

    }
}
int main(){
    int cnt[100] = {0};
    char c[100],a[100][100];
    gets(c);
    strlwr(c);
    char *token = strtok(c," ");
    int n  = 0;
    while(token != NULL){
        strcpy(a[n],token);
        n++;
        token =strtok(NULL," ");
    }
    sx(a,n);
    for(int i = 0;i < n;i++){
        if(cnt[i] == 0){
            int cn = 1;
            for(int j = i+1;j < n;j++){
                if(strcmp(a[i],a[j])==0)cn++,cnt[j]=1;

            }
            printf("%s %d\n",a[i],cn);
        }

    }   
}