#include <stdio.h>
#include <math.h>

int snt(int n){
    for(int i = 2; i<=sqrt(n);i++){
        if(n % i ==0)return 0;
    }
    return n > 1;
}

int pri[10001] = {0};
void sang(){
    for(int i = 0;i <= 10000;i++){
        pri[i]=1;
    }
    pri[0]=pri[1]=0;
    for(int i = 0;i <=sqrt(10000);i++){
        if(pri[i]){
            for(int j =i*i ;j <= 10000;j+=i){
                pri[j]=0;
            }
        }
    }

}
int main(){
    int n = 5;
    int a[n][n] = {
        {2,2,3,4,5},
        {6,7,8,3,10},
        {11,12,3,14,15},
        {16,3,18,19,20},
        {29,22,23,24,29}
    };
    sang();
    int cnt = 0;
    // for(int i = 0;i < n;i++){
    //     if(cn[a[i][n-i-1]] == 0 && snt(a[i][n-i-1]))cnt++,cn[a[i][n-i-1]];
    //     if(cn[a[i][n-i-1]] == 0 && snt(a[i][i]))cnt++,cn[a[i][n-i-1]]++;
    // }
    for(int i = 0;i < n;i++){
         if(pri[a[i][n-i-1]])cnt++,pri[a[i][n-i-1]]=0;
         if(pri[a[i][i]])cnt++,pri[a[i][i]]=0;
    }
    //if(n % 2 == 1 pri[a[n/2][n/2]])cnt--;
    printf("%d",cnt);

}