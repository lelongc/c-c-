#include <bits/stdc++.h>
using namespace std;
int tong(int n){
    if(n == 1)return 1;
    return n + tong(n-1);
}
int gt(int n){
    if(n == 0)return 1;
    return n * gt(n-1);
}
int nCk(int n,int k){
    if(n == k || k == 0)return 1;
    return nCk(n-1,k-1)+nCk(n-1,k);
}
int gcd(int a,int b){
    if(b == 0)return a;
    return gcd(b,a%b);
}
int binarypow(int a,int b){
    if(b == 0)return 1;
    int x = binarypow(a,b/2);
    if(b % 2 ==0) return x*x;
    else return x*x*a;
}
int cnt(int n){
    if(n < 10)return 1;
    return cnt(n/10)+1;
}
int dx(int a[],int l,int r){
    if(l >= r)return 1; // xet cac cap r 
    if(a[l]==a[r]){
        return dx(a,l+1,r-1);
    }
    else return 0;
}
int main(){
    int a[5]={1,2,3,7,1};
    cout<<dx(a,0,4);
}