#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int n =0;

struct num{
    char valu[100];
    int fre;
};
typedef struct num num;
num a[1000];
int tn(char c[]){
    if(strlen(c)==1)return 0;
    int l = 0,r = strlen(c)-1;
    while(l<r){
        if(c[l]!=c[r])return 0;
        l++;r--;
    }
    return 1;
}
int find(char x[]){
    for(int i = 0;i < n;i++){
        if(strcmp(x,a[i].valu)==0)return i;// ton tai r 
    }
    return -1;//ton tai lan dau
}
int cmp(const void *a,const void *b){
    num *x = (num*)a;
    num *y = (num*)b;
    if(strlen(x->valu) != strlen(y->valu))return (int)strlen(y->valu)-(int)strlen(x->valu);//tuong tu o duoi
    return -strcmp(x->valu,y->valu);//s1 lon hon no de o sau nhung mun in tu lon ve nho thi de dau tru
}

int main(){
    char x[100];
    while(scanf("%s",x)!= -1)
    if(tn(x)){
        int pos = find(x);
        if(pos != -1){// ton tai 1 so r
            a[pos].fre++;
        }
        else {
            strcpy(a[n].valu,x);
            a[n].fre = 1;
            n++;

        }
    }
    qsort(a,n,sizeof(num),cmp);
    for(int i = 0; i< n;i++){
        printf("%s %d\n",a[i].valu,a[i].fre);
    }
}