#include <stdio.h>
#include <algorithm>
int cmp(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
int cmp1(const void* a,const void* b){
    return *(int*)b-*(int*)a;// giamdan thi b-a
}
int main(){
    // int n;scanf("%d",&n);
    // int a[n];
    // for(int i = 0;i <n ; i++){
    //     scanf("%d",&a[i]);
    // }
    // int cnt[100]={0};
    // for(int i = 0 ;i < n ; i++){
    //     cnt[a[i]]++;
    // }
    // int max = 0;
    // for(int i = 0; i< n;i++){
    //     if(cnt[a[i]]>max)max=cnt[a[i]];
        
    // }
    // for(int i = 0; i< n;i++){
    //     if(cnt[a[i]]==max)printf("%d ",a[i]),cnta[a[i]]=0;//de in ra 1 lan 1 so thoi lan sau bien no thanh so khac
        
    // }
// bai 2 tron 2 day tang dan va mang 1 vao vi tri so chan mang 2 vao vi tri so le va mang 1 tang dan mang 2 giam dan 
    int n;scanf("%d",&n);
    int a[n],b[n];
    for(int i= 0 ; i< n ; i++)scanf("%d",&a[i]);
    for(int i= 0 ; i< n ; i++)scanf("%d",&b[i]);
    qsort(a,n,sizeof(int),cmp);
    qsort(b,n,sizeof(int),cmp1);
    for(int i = 0 ; i< n ;i++){
        printf("%d %d ",a[i],b[i]);

    }
}