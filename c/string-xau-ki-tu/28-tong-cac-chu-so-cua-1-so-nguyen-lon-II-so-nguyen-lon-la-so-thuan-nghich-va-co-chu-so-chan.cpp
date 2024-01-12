#include <stdio.h>
#include <string.h>
int check(char c[]){
    int res = 0;
    for(int i = 0;i < strlen(c);i++){
        res += c[i]-'0';
    }
    return res;
}
int stnc(char c[]){
    int l = 0, r = strlen(c)-1;
    while(l <= r){
        if(c[l]!=c[r])return 0;
        if((c[l]-'0')%2==1 || (c[r]-'0')%2==1)return 0;// vi la so tn nen k can kt ve sau cung dc 
        l++;r--;
    }
    return 1;

}
int main(){
    char c[100];scanf("%s",c);
    // printf("%d",check(c));
    if(stnc(c))printf("yes");
    else printf("no");
}