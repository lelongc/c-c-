#include <bits/stdc++.h> 
#include <algorithm>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct number{
    int valu;
    int fre;
};
typedef struct number num;
int st(int n){
    while(n>=10){
        int r = n % 10;
        if(r < (n/10)%10)return 0;
        n/=10;
    }
    return 1;
}
int cmp(const void *a,const void*b){
    num *x = (num*)a;
    num *y = (num*)b;
    return y->fre-x->fre;
}
int find(num a[],int n,int x){
    for(int i = 0; i< n;i++){
        if(a[i].valu==x)return i;
    }
return -1;
}
int main(){
        num a[100001];
        int n = 0;
        int x;
    while((scanf("%d",&x))!=-1){
            if(st(x)){
                int idx = find(a,n,x);
                if(idx!=-1){
                    a[idx].fre+=1;

                }
                else {
                    a[n].valu=x;
                    a[n].fre=1;
                    n++;
                }
            }

    }
    qsort(a,n,sizeof(num),cmp);
    for(int i =0 ;i <n ;i++){
        printf("%d %d\n",a[i].valu,a[i].fre);
    }

}
