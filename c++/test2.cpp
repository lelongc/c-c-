#include<iostream>
using namespace std;

int a[1000], n, cnt, ok;

void khoitao3(){
    a[1]=n;
    cnt = 1;
}

void sinh3(){ // sinh ra cac phan tu nho hon n ma tong cong lai bang n
    int i = cnt;
    while(i >= 1 && a[i]==1){
        --i;
    }
    if(i == 0)ok=0;
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if(q!=0){
            for(int j = 1;j <= q;j++){
                ++cnt;
                a[cnt]=a[i];
            }
        }
        if(r!=0){
            cnt++;
            a[cnt]=r;
        }

    }

}

int main(){
   cin>>n;
    khoitao3();
    ok=1;
    while(ok){
        for(int i = 1;i <= cnt;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
       
        sinh3();
    }
}
