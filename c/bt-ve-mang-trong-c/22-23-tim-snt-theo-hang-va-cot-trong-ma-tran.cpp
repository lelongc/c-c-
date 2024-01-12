#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int snt(int n){
    for(int i = 2; i< sqrt(n);i++){
        if(n % i == 0)return 0;
    }
    return n > 1;
}
int main(){
    int n,m;scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i = 0;i < n;i++){
        for(int j =0 ;j < m; j++){
            scanf("%d",&a[i][j]);

        }
    }
    int max = -1e9,idx;
    for(int i = 0;i <m ;i++){//n
        int cnt =0;
        for(int j =0; j <n;j++){//m
            if(snt(a[j][i]))cnt++;//a[i][j]
            if(cnt > max)max = cnt,idx = i;
        }
        
    }
  
    printf("%d\n",idx+1);
    for(int i = 0; i < n;i++){
        if(snt(a[i][idx]))printf("%d ",a[i][idx]);
    }


}