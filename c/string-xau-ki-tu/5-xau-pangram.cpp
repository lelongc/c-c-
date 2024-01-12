#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int cnt[26]={0};
int pg(char c[]){
    strlwr(c);
    for(int i = 0;i <strlen(c);i++){
        cnt[c[i]-'a']=1;
    }
    for(int i = 0;i < 26;i++){
        if(cnt[i]==0)return 0;
    }
    return 1;

}
int main(){
    char c[26];
    scanf("%s",c);
    if(pg(c))printf("yes");
    else printf("no");
    printf("%s",c);
}