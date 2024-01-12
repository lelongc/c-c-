#include <stdio.h>
int main(){
    int a[2][3]={
        {3,3,3},
        {3,3,3},
    };
    int b[3][3]={
        {2,2,2},
        {2,2,2},
        {2,2,2}
    };
    int c[2][3]={0};
    for(int i = 0;i <2 ;i++){
        for(int j =0 ;j < 3;j++){
            for(int k = 0;k < 3; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i = 0;i <2 ;i++){
        for(int j =0 ;j < 3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}