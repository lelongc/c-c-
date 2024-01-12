#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int check(char c[]){
    int cnt =0;
    int l = 0,r = strlen(c)-1;
    while(l < r){
        if(c[l]!=c[r])cnt++;
        l++;r--;
    }
    if(cnt <= 1 && strlen(c)%2==1)return 1;
    else if(cnt == 1&& strlen(c)% 2 ==0)return 1;
    return 0;
}
int main(){
    char c[100];
    scanf("%s",c);
    if(check(c))printf("yes");
    else printf("no");

}