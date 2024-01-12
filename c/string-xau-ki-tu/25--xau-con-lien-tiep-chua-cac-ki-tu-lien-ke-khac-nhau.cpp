#include <stdio.h>
#include <string.h>
int ck(char c[]){
    int cnt = 1,max = -1e9;
    for(int i = 0;i < strlen(c)-1;i++){
        if(c[i]==c[i+1]){//!=
            cnt++;
        }
        else {
            cnt = 1;
        }
        if(cnt > max)max = cnt;
        

    }
    return max;
}
int main(){
    char c[100];
    scanf("%s",c);
    printf("%d",ck(c));
}