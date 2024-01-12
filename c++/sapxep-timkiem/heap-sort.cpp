#include <bits/stdc++.h>
using namespace std;
// những chỉ số không phải là lá n phần tử / 2 - 1 
// những chì số dưới n/2 - 1 là những phần tử không phải lá 
void heap(int a[],int n,int i){
    int max = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l < n && a[l]>a[max])max = l;
    if(r < n && a[r]>a[max])max = r;
    if(max != i){
        swap(a[max],a[i]);
        heap(a,n,max);
    }
}
void heapsort(int a[],int n){
    for(int i = n/2 - 1; i >= 0 ;i--){
        heap(a,n,i);
    }
    for(int i = n-1;i >= 0;i--){
        swap(a[0],a[i]);
        heap(a,i,0);
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i = 0;i < n;i++)cin>>a[i];
    heapsort(a,n);
    for(int i = 0;i < n;i++)cout<<a[i]<<" ";
}