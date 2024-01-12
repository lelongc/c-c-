#include <stdio.h>
#include <string.h>
int ck(char c[]){
    int n = strlen(c);
    int tmp = 1,sum = 0;
    for(int i = n-1 ; i  >= 0; i--){
        sum += (c[i]-'0')*tmp;
        tmp*=2;
        tmp %=10;
        sum%=10;
    }
    if(sum % 5 == 0)return 1;
    return 0;
}
int main(){
   char c[10005];
   scanf("%s",c);
   if(ck(c))printf("yes");
   else printf("no");

}