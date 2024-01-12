#include <stdio.h>
int main(){
    // hoan vi 2 cot hang
        // int n,m;scanf("%d%d",&n,&m);
        // int a[n][m]={
        //     {1,2,3},
        //     {4,5,6},
        //     {7,8,9}
        // };
        // int c1,c2;//h1,h2;
        // scanf("%d%d",&c1,&c2);
        // c1--;c2--;
        // for(int i =0 ;i <n;i++){
        //     int tmp = a[i][c1];
        //     a[i][c1]=a[i][c2];
        //     a[i][c2]=tmp;
        // }
        // for(int i =0 ;i <n;i++){
        //     for(int j = 0;j < m;j++){
        //         printf("%d ",a[i][j]);
        //     }
        //     printf("\n");
        // }
    // hoan vi 2 duong cheo
    int n;scanf("%d",&n);
    int a[n][n]={
        {5,1,6},
        {1,4,1},
        {2,1,3}
    };
    for(int i = 0;i < n;i++){
        int tmp = a[i][i];
        a[i][i]=a[i][n-i-1];
        a[i][n-i-1]=tmp;
    }
    for(int i = 0; i< n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}