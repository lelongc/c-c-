#include <stdio.h>
#include <string.h>
int ck(char c[],int x){
    if(strlen(c)<=5)return 0;
    for(int i = 0;i  < x;i++){
        if(c[strlen(c)-1-i]=='1')return 0 ;
    }
    return 1;

}
int main(){
    char c[100];
    int x;scanf("%s%d",c,&x);
    if(ck(c,x))printf("y");
    else printf("no");
}