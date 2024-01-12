#include <stdio.h>
#include <string.h>
int val[]={1,5,10,50,100,500,1000};
char pos[]="IVXLCDM";
int vit(char c){
    for(int i =0 ;i <7;i++){
        if(pos[i]==c)return i;
    }
}
int findpos(char c[]){
    int n = strlen(c);
    int res = val[vit(c[n-1])];
    for(int i = n-1;i > 0;i--){
        int poss = val[vit(c[i])];
        int post = val[vit(c[i-1])];
        if( post >= poss){
            res+= post;
        }
        else {
            res-=post;
        }

    }
    return res;
}
int main(){
    char c[100];
    scanf("%s",c);
    printf("%d",findpos(c));
}