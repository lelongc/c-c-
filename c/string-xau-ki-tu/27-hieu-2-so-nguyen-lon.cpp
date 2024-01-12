#include <stdio.h>
#include <string.h>
void dao(int  c[],int n){
    int l = 0, r = n-1;
    while(l < r){
        int tmp = c[l];
        c[l]=c[r];
        c[r]=tmp;
        l++;r--;
    }
}
void sang(char a[],char b[]){
    int n1 = strlen(a),n2= strlen(b),n=0;
    int x[n1],y[n1],z[n1];
    for(int i = 0;i < n1 ;i++){
        x[i]=a[i]-'0';
    }
    for(int i = 0;i < n2 ;i++){
        y[i]=b[i]-'0';
    }
    dao(x,n1);dao(y,n2);
    for(int i = n2;i < n1;i++){
        y[i]=0;
    }
    
    int nho =0;
    for(int i = 0;i <n1 ;i++){
        int tmp = x[i]-y[i]-nho;
        if(tmp < 0){
            z[n++]=x[i]+10-y[i]-nho;
            nho = 1;
        }
        else {
            nho=0;
            z[n++]=tmp;
        }
    }
    int ok = 0;
    for(int i = n -1; i >= 0;i--){
        if(ok == 0 && z[i]!= 0){
            ok=1;
        }
        if(ok == 1)printf("%d",z[i]);
    }
    if(ok == 0)printf("0");

}
int main(){
    char a[100],b[100];
    scanf("%s%s",a,b);
    if(strlen(a)>strlen(b) || (strlen(a) == strlen(b) && strcmp(a,b)>0)){
        sang(a,b);
    }
    else sang(b,a);
}