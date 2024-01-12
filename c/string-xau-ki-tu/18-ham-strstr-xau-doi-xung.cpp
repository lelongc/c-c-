#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    char c[100],d[100];
    scanf("%s %s",c,d);
    if(strstr(c,d)!=NULL)printf("yes");
    else printf("no");
    // int cnt[256]={0};
    // for(int i = 0;i <strlen(c);i++){
    //     cnt[c[i]]++;
    // }
    // int ok = 0;
    // for(int i = 0;i < 256;i++){
    //    if(cnt[i]%2 == 1)ok++;
    // }
    
    //  if(ok <= 1) printf("yes");
    //  else printf("no");


}