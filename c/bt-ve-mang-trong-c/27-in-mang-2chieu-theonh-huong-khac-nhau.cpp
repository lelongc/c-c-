#include <stdio.h>
#include <math.h>
int main(){
    int n;scanf("%d",&n);
    int a[n][n]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for(int i = n-1;i >= 0;i--){
        for(int j = 0;j < n; j++){
            printf("%d ",a[j][i]);

        }
        printf("\n");
    }

}