#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i = 0; i< n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    int res = 2e9+1001,cnt =0;
    for(int i= 1;i <n ;i++){
        if(a[i]-a[i-1]<res)res = a[i]-a[i-1],cnt=1;
        else {
            cnt++;

        }
    }
    printf("%d %d\n",res,cnt);
}