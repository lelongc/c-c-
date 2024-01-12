#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x,const void *y){
    return *(int*)x-*(int*)y;
}
void sx(int a[],int n){
    for(int i = 0 ;i < n; i++){
        int min = i;
        for(int  j = i +1;j < n;j++){
            if(a[min]>a[j])min= j;
        }
        int tmp = a[min];
        a[min]=a[i];
        a[i]=tmp;
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i = 0; i< n;i++){
        for(int j = 0;j < m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m][n];
    for(int i = 0; i < m;i++){
        for(int j = 0; j< n;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i = 0;i < m;i++){
        sx(b[i],n);
    }
    for(int i =0; i< n;i++){
        for(int j = 0;j <m;j++){
            printf("%d ",b[j][i]);
        }
        printf("\n");
    }

    //for(int i = 0; i< n;i++){
    //     sx(a[i],m);
    //      for(int j = 0;j < m;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
}