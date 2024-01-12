#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x,y);


}
int main(){
    char c[100],a[100][100];
    
    gets(c);
    strlwr(c);
    char *tok=strtok(c," ");
    int n = 0;
    while(tok != NULL){
        strcpy(a[n++],tok);
        tok = strtok(NULL," ");
        
    }
    // qsort(a,n,sizeof(a[0]),cmp);
    int max = -1e9,idx;
    
    for(int i = 0;i < n;i++){
        int cnt = 1;
        int ok  =1 ;
        for(int j = 0;j < i;j++){
            if(strcmp(a[i],a[j])==0){
                ok =0;break;
            }
        }

        if(ok==1)printf("%s ",a[i]);
        // if(max < cnt){
        //        max = cnt;
        //        idx = i;
        // }
        // else if(max == cnt){
        //     if(strcmp(a[idx],a[i])>0){
        //         max = cnt;
        //         idx = i;
        //     }
        // }
    }
    
}
