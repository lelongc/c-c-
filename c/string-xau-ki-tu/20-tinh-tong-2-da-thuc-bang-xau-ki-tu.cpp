#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int cnt[10001];
void sx(char c[]){
    for(int i = 0;i < strlen(c);i++){
        if(isdigit(c[i])){
            int so = 0;
            while(isdigit(c[i])){
                so = so*10 + c[i]-'0';
                i++;
            }
            i+=3;
            int mu = 0;
            while(isdigit(c[i])){
                mu = mu*10 + c[i]-'0';
                i++;
            }
            cnt[mu]+=so;
        }
    }
}
int main(){
    char a[100],b[100];
    gets(a);gets(b);
    sx(a);sx(b);
    int dem = 0;
    for(int i = 10000;i >= 0;i--)if(cnt[i])dem++;
    for(int i = 10000;i >= 0;i--){
        if(cnt[i]){dem--;
        printf("%d*x^%d",cnt[i],i);
        if(dem!=0)printf(" + ");}
    }
}