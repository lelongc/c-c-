#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int pri(int n){
    for(int i = 2 ;i <= sqrt(n);i++){
        if(n % i ==0)return 0;
    }
    return n>1;
}
int main(){
    int n= 3;
    int a[n][n]={0};
    int fibo[n*n],snt[n*n];
    fibo[0]=0;
    fibo[1]=1;
    for(int i = 2;i < n*n;i++ ){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int idx = 0,i = 0;
    while(idx < n*n){
        if(pri(i)){
            snt[idx]=i;
            idx++;

        }
        i++;
    }
   
    
    int h1 = 0,h2 = n-1,c1 = 0,c2 = n-1;
    int cnt = 0;
    while(h1 <= h2 && c1 <= c2){
        for(int i = c1; i <= c2 ; i++){
            a[h1][i]=fibo[cnt];cnt++;
        }h1++;
        for(int i = h1; i<= h2;i++){
            a[i][c2]=fibo[cnt];cnt++;
        }c2--;
       if(c1 <= c2){ for(int i = c2;i >=c1;i--){
            a[h2][i]=fibo[cnt];cnt++;
        }h2--;}
       if(h1 <= h2){ for(int i = h2;i >= h1;i--){
            a[i][c1]=fibo[cnt];cnt++;
        }c1++;}

    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j <n ;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
