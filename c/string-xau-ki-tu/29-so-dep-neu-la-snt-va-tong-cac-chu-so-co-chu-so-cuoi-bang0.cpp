#include <stdio.h>
#include <string.h>
#include <math.h>
int snt(int n){
    for(int i =2 ;i <=sqrt(n);i++){
        if(n % i == 0)return 0;
    }
    return n > 1;
}
int check(char c[]){
    int res = 0;
    for(int i =0 ;i < strlen(c);i++){
        if(snt(c[i]-'0')==0)return 0;
        res += c[i]-'0';
    }
    if(res % 10 == 0)return 1;
    return 0;
}
int main(){
    char c[1000];
    scanf("%s",c);
    if(check(c))printf("yes");
    else printf("no");
    
}