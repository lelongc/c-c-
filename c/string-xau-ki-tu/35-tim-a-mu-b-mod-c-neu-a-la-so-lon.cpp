#include <stdio.h>
#include <string.h>
long long du(char a[],long long m){
    long long res = 0;
    for(int i = 0;i < strlen(a);i++){
        res = (res*10)+(a[i]-'0');
        res%=m;
    }
    return res;
}
long long find(long long a,long long b,long long m){
    long long res = 1;
    while(b){
        if(b % 2 == 1){
            res*=a;
            res%=m;
        }
        a*=a;
        a%=m;
        b/=2;
    }
    return res;
}
int main(){
    char a[10000]={0};
    long long b,m;
    scanf("%s%lld%lld",a,&b,&m);
    long long d = du(a,m);
    printf("%lld",find(d,b,m));

}