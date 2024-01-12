#include <stdio.h>
int dem(int n){
    if(n < 10){
        if(n % 2==0)return n;
        else return 0;
    }
    else{
         if(n % 2 == 0)return  n % 10 + dem(n / 10);
         else return dem(n/10);
    }
}
int main(){
    int n;scanf("%d",&n);
    printf("%d",dem(n));
}