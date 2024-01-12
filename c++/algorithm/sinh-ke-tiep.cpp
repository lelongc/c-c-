#include <bits/stdc++.h>
using namespace std;
int n,k,ok = 1;
int cnt ;
int a[100];
void khoitao(){
    for(int i = 1;i <= n;i++){
        a[i]=0;
    }
}
void khoitao12(){
    for(int i = 1;i <= n;i++){
        a[i]=i;
    }
}
void khoitao3(){
    a[1]=n;
    cnt = 1;
}
//3
// 0 0 0
// 0 0 1
// 0 1 0
// ....
void sinh(){
    int i = n;
    while(i >= 1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i == 0){
        ok=0;
    }
    else a[i]=1;

}
int ck(){ // in ra co k so 1
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        cnt+=a[i];
    }
    return cnt == k;
}
// n =5 k = 3
// 1 2 3
// 1 2 4
// .. ..
// 3 4 5
void sinh1(){ // sinh tap con k co n phan tu 
    int i = k;
    while(i >= 1 && a[i]==n-k+i){// số lớn nhất có thể của bit đó 
        i--;
    } 
    if(i == 0){
        ok = 0;
    }
    else {
        a[i]++;
        for(int j = i+1;j <= k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
// 3
// 123
// 132
// 213
// 231
// 312
// 321
void sinh2(){ // ham co san la ham next_permutation // hoan vi n phan tu //prev_permutation thi in nguoc lai 
    int i = n-1;// xet tu cuoi ve
    while(i >= 1 && a[i]>a[i+1])i--;
    if(i == 0){
        ok = 0;
    }
    else{
        int j = n;
        while(a[j]<a[i])j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1); // vi khi chuyen xong thi cac phan tu sau i giam dan nen ta dao lai cho no tang dan 

        
    }
}
// 4
//
// 4
// 31
// 22
// 211
// 1111
void sinh3(){ // sinh ra cac phan tu nho hon n ma tong cong lai bang n
    int i = cnt;
    while(i >= 1 && a[i]==1){
        i--;
    }
    if(i == 0){
        ok=0;
    }
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if(q){
            for(int j = 1;j <= q;j++){
                cnt++;
                a[cnt]=a[i];
            }
        }
        if(r){
            cnt++;
            a[cnt]=r;
        }

    }

}
int main(){
   cin>>n;
    khoitao3();
    while(ok){
        for(int i = 1;i <= cnt;++i){
            cout<<a[i];
        }
        cout<<endl;
       
        sinh3();
    }
}