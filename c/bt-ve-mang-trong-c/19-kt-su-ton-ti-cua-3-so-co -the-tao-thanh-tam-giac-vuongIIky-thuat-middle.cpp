#include <stdio.h>
#include <string.h>
void sort(int a[],int n){
    for(int i =0 ;i <n ;i++){
        int m = i;
        for(int j =i+1 ;j < n;j++){
            if(a[j]<a[m])m=j;
        }
        int tmp =a[i];
        a[i]=a[m];
        a[m]=tmp;

    }
}
int check(int a[],int n){
    for(int i =n-1; i >=2 ;i--){// con 0 vs 1 de xem co tao thanh pytago khong
        int l =0,r=i-1;
        while(l < r){
            if(a[l]+a[r]==a[i])return 1;
            else if(a[l]+a[r]<a[i])l++;
            else r--;
        }
        
    }
    return 0;
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i =0 ;i <n;i++){
        int x;scanf("%d",&x);
        a[i]=x*x;
    }
    sort(a,n);
    if(check(a,n))printf("yes");
    else printf("no");
}