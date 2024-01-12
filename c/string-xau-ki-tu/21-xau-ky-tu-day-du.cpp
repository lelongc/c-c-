#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int ck(char c[]){
    int res = 1,max = 0;
    for(int i = 1;i < strlen(c);i++){
      
        if(c[i]>c[i-1])res++;
        else res = 1;
        if(res > max)max = res;
       
    }
    return 26-max;

}
int main(){
    char c[100];
    scanf("%s",c);
    printf("%d",ck(c));
    
}