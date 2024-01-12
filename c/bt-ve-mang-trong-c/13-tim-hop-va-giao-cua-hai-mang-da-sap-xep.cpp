#include <stdio.h>
int min(int a,int b){
    return a < b ? a : b;
}
int max(int a,int b){
    return a > b ? a :b;
}
int cnt[100001];
// bai 1 tim hop va giao cua 2 mang da sap xep tang dan 
// int main(){
//     int n,m;scanf("%d%d",&n,&m);
//     int a[n],b[m],giao[min(n,m)],hop[n+m];
//     for(int i = 0 ; i< n;i++)scanf("%d",&a[i]);
//     for(int i = 0 ;i< m ;i++)scanf("%d",&b[i]);
//     int i = 0, j= 0,g=0,h=0;
//     while(i < n && j < m){
//         if(a[i]<b[j]){
//             hop[h]=a[i];
//             h++;i++;
//         }
//         else if(a[i]>b[j]){
//             hop[h]=b[j];
//             h++;j++;
//         }
//         else if(a[i]==b[j]){
//             hop[h]=a[i];
//             giao[g]=b[j];
//             i++;j++;g++;h++;
//         }
      
//     }
//     while(i < n){
//         hop[h++]=a[i++];
//     }
//     while(j < m){
//         hop[h++]=b[j++];
//     }
//     for(int i = 0;i <h;i++){
//         printf("%d ",hop[i]);
//     }
//     printf("\n");
//     for(int i = 0; i< g;i++){//o cuoi tren kia thi g vs h tang nen duyet toi g va h thoi
//         printf("%d ",giao[i]);
//     }
// }

//bai 2 tim hop va giao cua 2 mang khong sx bang mang dem 
int main(){
    int n,m;scanf("%d%d",&n,&m);
    int a[n],b[m];
    int maxk = -1e9,mink=1e9;
    for(int i = 0; i< n;i++){
        scanf("%d",&a[i]);
        cnt[a[i]]++;// = 1*b2 neu phan tu trong mang trung nhau 
        mink = min(mink,a[i]);
        maxk = max(maxk,a[i]);
    }
    for(int i = 0 ; i< m; i++){
        scanf("%d",&b[i]);
        cnt[b[i]]++;// = if = 1 in 1 else 2 *b3 neu phan tu trong mang trung nhau
        mink = min(mink,b[i]);
        maxk = max(maxk,b[i]);
    }
    for(int i = mink;i<=maxk;i++){//vd 1 4 3 2 thi duyet tu 1 den 4 
        if(cnt[i]==2)printf("%d ",i);// giao 
    }
    printf("\n");
    for(int i = mink;i<=maxk;i++){
        if(cnt[i])printf("%d ",i);// hop // dem dc lon hon 1 thi nem vo hop 
    }
    

}