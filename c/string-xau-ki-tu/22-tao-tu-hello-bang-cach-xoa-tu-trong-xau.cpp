#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
// int ck(char c[],char he[]){
//     int i = 0;
//     int cnt = 0;
//     while(i < strlen(c)){
//         if(c[i]==he[cnt])cnt++;
//         i++;
//         if( cnt == 5 )return 1;
//     }
    
//     return 0;

// }
// int main(){
//     char c[100];
//     char he[5]={'h','e','l','l','o'};
//     scanf("%s",c);
//     if(ck(c,he))printf("yes");
//     else printf("no");    
// }
int main(){
    char c[100];
    scanf("%s",c);
    int idx = -1,res = 0;
    for(int i = 0;i <strlen(c);i++){
        if(c[i]=='1'){
            if(idx == -1)idx = i;
            else {
                res += i - idx -1;
                idx = i;

            }
        }
    }
    printf("%d",res);
}