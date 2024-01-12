#include <stdio.h>
#include <string.h>
int main(){
    char c[1000];
    scanf("%s",c);
    int n = strlen(c);
   int pos = 0;
    while(pos < n){
        char tmp = c[pos];
        int last = 0;
        for(int i = pos ;i < n;i++){
            if(c[i]>tmp)tmp = c[i];
        }
        for(int i = pos ;i < n;i++){
            if(c[i]==tmp){
                printf("%c",c[i]);
                pos = i+1;
            }

        }

    }
}