
#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i< n; i++){
        scanf("%d",&a[i]);
    }
long long prefix[n];
    prefix[0] = a[0]; // Khởi tạo phần tử đầu tiên của mảng prefix
    for(int i = 1; i<n;i++){
        prefix[i]=prefix[i-1]+a[i]; // Tính tổng tiền tố cho các phần tử còn lại
    }
        int t;scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d%d",&l,&r);
        l--; r--; // Trừ đi 1 vì mảng bắt đầu từ 0
        if(l > 0)
            printf("%lld\n",prefix[r]-prefix[l-1]); // Nếu l > 0, trừ đi tổng tiền tố tại vị trí l-1
        else if( l == 0 )
            printf("%lld\n",prefix[r]); // Nếu không, chỉ cần in tổng tiền tố tại vị trí r
    }
}


