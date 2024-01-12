#include <stdio.h>
#include <math.h>
int tang(int n){
    while(n >= 10){// vd 1024 thì nó sẽ k so sánh 1 vs với số rác mà chỉ dừng ở số 0 và so sánh  0 với số 1
        int r = n % 10;
        if(r <= (n/10)%10)return 0;

        n/=10;
    }
    return 1;
}
int giam(int n){
    while(n >= 10){// vd 1024 thì nó sẽ k so sánh 1 vs với số rác mà chỉ dừng ở số 0 và so sánh  0 với số 1
        int r = n % 10;
        if(r >= (n/10)%10)return 0;

        n/=10;
    }
    return 1;
}
int snt(int n ){
    for(int i = 2;i<=sqrt(n);i++){
        if( n % i ==0 )return 0;
    }
    return n >1;
}
int main(){
    int n;scanf("%d",&n);
    int cnt  =0;
    for(int i = pow(10,n-1);i<pow(10,n);i++){
        if(snt(i)&&(tang(i)||giam(i)))++cnt;
    }
    printf("%d",cnt);
}