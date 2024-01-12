#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int cmp(const void *a,const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(*x % 2 == 0 && *y % 2 == 1)return 1;
    else if( *x % 2 == 1 && *y % 2 == 0)return -1;
    else if((*x % 2 == 0 && *y % 2 == 0) || (*x % 2 == 1 && *y % 2 == 1)){
        return *x-*y;
    }
    
    
}
int main(){
    int n,k;scanf("%d%d",&n,&k);
    k--;


    int  c[1000]={0};
    for(int i = 0;i < n;i++){
        c[i]=i+1;
    }
    qsort(c,n,sizeof(int),cmp);
    printf("%d",c[k]);
    // for(int i = 0; i< n;i++){
    //     printf("%d ",c[i]);
    // }
    
}