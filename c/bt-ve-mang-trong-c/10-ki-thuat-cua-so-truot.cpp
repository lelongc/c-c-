#include <stdio.h>
int main(){
    int n,k;scanf("%d%d",&n,&k);
    int a[n],b[k];
    for(int i = 0 ; i< n ; i++){
        scanf("%d",&a[i]);
    }
    //c1 cach lam trau
        // int max = -1e9;
        // int idx;//luu chi so bat dau cua cac phan tu lien tiep 
        // for(int i = 0 ; i<= n-k ; i++){
        //     int tmp = 0;
        //     for(int j = 0; j < k; j++){
        //         tmp += a[i+j];
        //     }
        //     if(tmp > max )max = tmp,idx=i;
        //     else if(tmp == max)max = tmp,idx=i;// neu mun in ra so o sau thi bo dong nay di 

        // }
        // printf("%d\n",max);
        // for(int i = 0; i < k;i++){
        //     printf("%d ",a[idx+i]);
        // }
    //c2 cach dung cua so truot
    int max = 0,idx,sum=0;
    for(int i = 0 ; i < k ; i++)sum+=a[i];//cua so dau tien
    int res;
    res = sum;
    for(int i = 1; i< n-k+1;i++){
        res = res -a[i-1]+a[i+k-1];
        if(res >= max)max = res,idx=i;// them dau bang neu mun lay so sau

    }
       
    printf("%d\n",max);
    for(int i = 0; i< k;i++){
        printf("%d ",a[i+idx]);
    }
}