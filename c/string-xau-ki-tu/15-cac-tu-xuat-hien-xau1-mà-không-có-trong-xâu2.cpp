#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){
    char *x = (char*)a;
    char *y =(char*)b;
    return strcmp(x,y);
}
int main(){
    char a[100],b[100],c[100][100],d[100][100];
    gets(a);
    gets(b);
    char *tok=strtok(a," ");
    
    int n = 0,n1=0;
    while(tok != NULL  ){
        strcpy(c[n++],tok);
        tok = strtok(NULL," ");
    }
       tok=strtok(b," ");
    while(tok != NULL  ){
        
        strcpy(d[n1++],tok);
        tok = strtok(NULL," ");
    }
    qsort(c,n,sizeof(c[0]),cmp);

    
    for(int i = 0;i <n;i++){
        int ok = 0;
        while(i < n-1 && strcmp(c[i],c[i+1])==0)i++;
        for(int j = 0;j< n1;j++){
            if(strcmp(c[i],d[j])==0){
                ok =1;break;
            }
        }
        if(ok==0)printf("%s ",c[i]);
    }
    
}
