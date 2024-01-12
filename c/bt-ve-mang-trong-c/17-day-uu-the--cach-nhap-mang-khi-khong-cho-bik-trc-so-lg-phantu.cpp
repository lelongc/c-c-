#include <stdio.h>
int main(){
    char kitu = ' ';
    
    int cnt=0,c=0,l=0;
    while(kitu !='\n'){
        int x;scanf("%d",&x);
        cnt++;
        if(x%2==0)c++;
        else l++;
        kitu = getchar();
    }
    if((cnt % 2 == 0 && c > l) || ( cnt % 2 == 1 && l > c))printf("yes");
    else printf("no");
   

}