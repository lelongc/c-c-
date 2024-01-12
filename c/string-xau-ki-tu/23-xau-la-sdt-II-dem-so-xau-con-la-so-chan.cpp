#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int dem(char c[]){
    int res = 0;
    for(int i =0 ;i <strlen(c);i++){
        if((c[i]-'0')%2 == 0){
            res+=i+1;
        }
    }
    return res ;
}
// int ck(char c[]){
//     if(strlen(c)<11)return 0;
    
//     int cnt = -1;
//     for(int i = 0;i <strlen(c);i++){
//         if(c[i]=='8'){
//             cnt=i;
//             break;
//         }
        
//     }
//     if(cnt==-1)return 0;

//     if(cnt != -1 && strlen(c)-cnt-1 >= 10 ) return 1;
//     return 0;

// }
int main(){
//     int n;scanf("%d",&n);
//     char c[n];
//     scanf("%s",c);
//     if(ck(c))printf("yes");
//     else printf("no");
    

    char c[100];
    scanf("%s",c);
    printf("%d",dem(c));



}