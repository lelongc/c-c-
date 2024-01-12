#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    char c[1005];
    gets(c);
    // int al = 0,di = 0;
    // // int orth =0;
    // for(int i = 0;i <strlen(c);i++){
    //     if(isalpha(c[i]))al++;
    //     else if(isdigit(c[i]))di++;
    //     else orth++;
    // }
    // printf("%d %d %d",al,di,orth);
    int cnt[26]={0};
    int max = -1e9,idx;
    for(int i = 0;i < strlen(c);i++){
        cnt[c[i]-'a']++;
    }
    //for(int i = 0;i <26;i++){// in theo thứ tự từ điển
    //     if(cnt[i]!=0){
    //         printf("%c %d\n",i+'a',cnt[i]);
    //         cnt[i]=0;
    //     }
    // }




    // for(int i = 0;i <strlen(c);i++){// in theo vi tri xuat hien 
    //     if(cnt[c[i]-'a']!=0){
    //         printf("%c %d\n",c[i],cnt[c[i]-'a']);
    //         cnt[c[i]-'a']=0;
    //     }
    // }

    
}