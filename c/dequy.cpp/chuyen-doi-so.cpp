#include <stdio.h>
int snp(int n){
    if(n < 2)printf("%d",n);
    else {
        snp(n/2);
        printf("%d",n%2);
    }
}
int tlp(int n){
    if(n < 16){
       if(n < 10) printf("%d",n);
       else printf("%c",55+n);

    }
    else {
        tlp(n/16);
        int r = n % 16;
        if(r<10)printf("%d",r);
        else printf("%c",55+r);
    }


}
int main(){
    int n;scanf("%d",&n);
    tlp(n);
}