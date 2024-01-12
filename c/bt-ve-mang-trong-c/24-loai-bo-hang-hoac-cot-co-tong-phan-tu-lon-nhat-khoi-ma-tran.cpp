#include <stdio.h>
int main(){
    int n,m;scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i = 0;i <n ;i++){
        for(int j =0 ;j <m ;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max1=-1e9,hang,cot,max2=-1e9;
    for(int i = 0;i <n ;i++){
        int tong=0;
        for(int j =0 ;j <m;j++){
            tong+=a[i][j];
        }
        if(max1 < tong)max1=tong,hang=i;

    }
    for(int i = 0;i <m ;i++){
        int tong=0;
        for(int j =0 ;j <n;j++){
            if(j!=hang)tong+=a[j][i];
        }
        if(max2 < tong)max2=tong,cot=i;
    }
    for(int i = 0;i < n;i++){
        if(i != hang){
             for(int j =0 ;j<m;j++){
                if(j!=cot)printf("%d ",a[i][j]);
            }
            printf("\n");
        }

    }
}