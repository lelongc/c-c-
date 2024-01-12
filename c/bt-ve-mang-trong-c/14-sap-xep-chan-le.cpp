#include <stdio.h>
#include <algorithm>
void seltsort(int a[],int n){
    for(int i = 0 ; i< n;i++){
        int min = i;//coi so dau nho nhat
        for(int j = i+1;j < n;j++){
            if(a[j]<a[min])min = j;
        }
        int tmp = a[min];// luu tam bien lon hon hien tai
        a[min]=a[i];// de chi so dau ra sau
        a[i]=tmp;//thay so dau thanh so nho hon 

    }
}
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    
    int n;scanf("%d",&n);
    int chan[n],le[n];
    int c= 0,l=0;
    for(int i = 0; i< n;i++){
        int x;scanf("%d",&x);
        if(x % 2 == 0)chan[c]=x,c++;
        else le[l]=x,l++;
    }
    qsort(chan,c,sizeof(int),cmp);
    qsort(le,l,sizeof(int),cmp);

    // seltsort(chan,c);
    // seltsort(le,l);//sap xep
    for(int i = 0; i< c;i++)printf("%d ",chan[i]);
    for(int i = 0; i< c;i++)printf("%d ",le[i]);


}