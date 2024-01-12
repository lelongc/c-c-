#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i = 0 ;i< n;i++){
        scanf("%d",&a[i]);
    }

    long long sum1 = -1e18,sum2 = 0;
    for(int i = 0;i<n;i++){
        sum1+=a[i];
        if(sum1>sum2)sum2 = sum1;
        if(sum1 < 0)sum1 = 0;
    }
    printf("%d",sum2);
    
}