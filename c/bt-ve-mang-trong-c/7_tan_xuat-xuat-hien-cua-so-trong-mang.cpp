#include <stdio.h>
int cnt[1000000]={0};
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i = 0 ;i < n ; i++){
        scanf("%d",&a[i]);
    }
// bai 1 : in ra so ma k lap lai

        // for(int i = 0; i< n; i++){
        //     int ok = 1;
        //     for(int j = 0; j < i; j++){
        //         if(a[i]==a[j]){
        //             ok=0;
        //             break;

        //     }
        //     if(ok==1)printf("%d ",a[i]);
        // }

//bai 2 in so co tan xuat lon nhat va tan xuat do || neu cung tan xuat hien lay so nho hon vd 19933 thi lay 3
        // for(int i = 0; i < n;i++){
        //     cnt[a[i]]++;
        // }
        // int dem = 0,so;
        // for(int i = 0;i < n; i++){
        //     if(cnt[a[i]]>dem)dem = cnt[a[i]],so = a[i];
        //     else if(cnt[a[i]]==dem){
        //         if(so > a[i])so = a[i];// 9 > 3 thi lay 3 
        //     }
        // }

        // printf("%d %d",so,dem);

//bai 3 giong bai 2 nhung khong lay so nho hon ma lay so o truoc vd 19933 thi lay 9
    //c1 se ton olonn nhung k dung dc vs so am 
        // for(int i = 0; i < n;i++){
        //         cnt[a[i]]++;
        //     }
        //     int dem = 0,so;
        //     for(int i = 0;i < n; i++){
        //         if(cnt[a[i]]>dem)dem = cnt[a[i]],so = a[i];
                
        //     }
        //     printf("%d %d",so,dem);
    //c2 dung vong for dung duoc vs so lon hon va so longlong
        // int dem = 0,so;
        // for(int i = 0;i<n;i++){
        //     int cnt = 1;//tinh lun so dau 
        //     for(int j = i+1;j<n;j++){//chi can duyet tu so sau la dc // vd 19933 thi qua so 9 dau no da dem va cap nhat so lan cung so luon r 
        //         if(a[i]==a[j])cnt++;
        //     }
        //     if(cnt > dem)dem = cnt,so = a[i];
        // }
        // printf("%d %d ",so,dem);

// bai 4 dem so lan xuat hien cua tung so va in ra cung so do 
    //c1 dung vong for tu che 
        // for(int i = 0; i< n;i++){
        //     int dem = 1,so = a[i],ok=1;
        //     for(int j = i+1;j<n;j++){
        //         if(a[i]==a[j]){
        //             dem++;
        //         }
                
        //     }
        //     for(int j = 0;j<i;j++){
        //         if(a[i]==a[j]){ok=0;break;}
        //     }
        //    if(ok==1)printf("%d %d\n",so,dem);
            
        // }
    //c2 dung mang luu bien dem
    for(int i = 0 ;i < n; i++){
        cnt[a[i]]++;
    }
    for(int i = 0 ;i<n;i++){
        if(cnt[a[i]]!=0)printf("%d %d\n",a[i],cnt[a[i]]),cnt[a[i]]=0;
    }

}