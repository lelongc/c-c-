#include <stdio.h>
#include <string.h>
long long  du(char c[],long long m){
    long long res = 0;
    for(int i =0 ;i < strlen(c);i++){
        res = ((res*10)+(c[i]-'0'))%m;

    } 
    return res;
}
long long  gcd(long long a, long long b){
    if(b==0)return a;
    return gcd(b,a%b);
}
long long ck(char c[],long long m){
    long long a = m;
    long long b = du(c,m);
    return gcd(a,b);
}
int main(){
    char c[10000];
    long long m;
    scanf("%s%lld",c,&m);
    printf("%lld",ck(c,m));

}