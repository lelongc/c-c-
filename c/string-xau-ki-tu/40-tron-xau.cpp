#include <stdio.h>
#include <string.h>
int main(){
    int n,k;scanf("%d",&n);
    char a[n],a1[n],b[n],b1[n],z[n*2],z1[n*2];
    scanf("%s",a);scanf("%s",b);scanf("%s",z);
    strcpy(a1,a);strcpy(b1,b);strcpy(z1,z);
    scanf("%d",&k);
    int cnt = 0;
    int ok = 1;
    if(k == 0){
        
        while(1){
            cnt++;
            int cb= 0,ca = 0;// j = 0
            for(int i = 0;i < 2*n;i++){//n
               if(i % 2 == 0)z1[i]=b1[cb++];//z1[j++]= b[i]
               else if(i % 2 == 1)z1[i]=a1[ca++];//z1[j++]= a[i]
            }
            
            ca=0;cb=0;
            for(int i = 0;i < 2*n;i++){         //A
                if(i < (2*n)/2)a1[ca++]=z1[i];  //l
                else {
                    b1[cb++]=z1[i];
                }
            }
            if(strcmp(z,z1)==0)break;
            if(strcmp(a1,a)==0 && strcmp(b,b1)==0){
                ok = 0;break;

            }
        }
    }
    if(ok == 0)printf("-1");
    else printf("%d",cnt);
}