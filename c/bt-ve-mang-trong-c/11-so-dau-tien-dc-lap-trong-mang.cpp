#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int cnt[1000001];
int main(){
    int t;scanf("%d",&t);

    while(t--){
        int n;scanf("%d",&n);
        int a[n];
        for(int i = 0 ; i < n; i++){
            scanf("%d",&a[i]);
        }
    //c1 su dung vong lap 
            // int ok = 0;
            // int check = 0;
            // for(int i = 0 ; i< n; i++){
            //     for(int j = i + 1; j < n;j++){
            //         if(a[i]==a[j])check =a[i],ok=1;
            //     }
            // }
            // if(ok == 0)printf("-1\n");
            // else printf("%d\n",check);
    //c2 su dung mang dem
        int ok = 0;
        for(int i = 0 ; i< n ; i++){
            if(cnt[a[i]]==1){
            printf("%d\n",a[i]),ok=1;
            break;
            }
            cnt[a[i]]=1;
        }
        if(ok==0)printf("-1\n");
        memset(cnt,0,sizeof(cnt));
        }
    }
