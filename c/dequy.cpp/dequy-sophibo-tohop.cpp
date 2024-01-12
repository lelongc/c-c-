#include <stdio.h>
long long  fib(int n){
    if(n==0 || n == 1)return n;
    else return fib(n-1)+fib(n-2);
}
long long tohop(int n,int k){
    if(n == k || k == 0)return 1;
    else return tohop(n-1,k-1)+tohop(n-1,k);
}
int main(){
    int n,k;scanf("%d%d",&n,&k);
    printf("%lld",tohop(n,k));
}