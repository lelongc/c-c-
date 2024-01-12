#include <stdio.h>
#include <string.h>
void dao(int  c[],int n ){
    int l = 0, r = n-1;
    while(l < r){
        char tmp = c[l];
        c[l]=c[r];
        c[r]=tmp;
        l++;r--;
    }
}
void sang(char a[],char b[]){
    int n1  = strlen(a),n2 = strlen(b);
    int x[n1],y[n1],z[n1+1];
    for(int i = 0;i < n1;i++)x[i]=a[i]-'0';
    for(int i =0 ;i < n2;i++)y[i]=b[i]-'0';
    dao(x,n1),dao(y,n2);
    for(int i = n2;i < n1;i++)y[i]=0;
    int nho = 0,idx = 0;
    for(int i =0 ;i < n1;i++){
        int tmp = x[i]+y[i]+nho;
        z[idx++]= tmp % 10;
        nho = tmp /10;
    }
    if(nho == 1)z[idx++]=nho;
    dao(z,idx);
    for(int i = 0;i < idx;i++){
        printf("%d",z[i]);
    }
}
int main(){
    char a[100],b[100];
    scanf("%s%s",a,b);
    sang(a,b);


}