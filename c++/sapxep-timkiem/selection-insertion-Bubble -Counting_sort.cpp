#include <bits/stdc++.h>
using namespace std;

void sxtructtiep(int a[],int n){
    for(int i = 0;i < n-1;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]>a[j]){
               swap(a[i],a[j]);
            }
        }
    }
}

void selectionsort(int a[],int n){ // này tối ưu hơn 
    for(int i = 0;i < n-1;i++){
        int m = i;
        for(int j = i+1;j<n;j++){
            if(a[m]>a[j]){
              m = j;
            }
        }
         swap(a[m],a[i]);
    }
}
void bubblesort(int a[],int n){
    for(int i = 0;i < n-1;i++){
        for(int j= 0;j < n-1-i;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }

    }
}

void insertsort(int a[],int n){
    for(int i = 1;i < n;i++){
        int x = a[i],pos = i-1;
        while(pos >= 0 && x < a[pos]){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
    }
}
/// 3 cái trên là O(n^2)
int cnt[10000001];
void countingsort(int a[],int n,int m){
    for(int i = 0;i < n;i++){
        cnt[a[i]]++;
    }
    for(int i = 0;i <= m;i++){
        if(cnt[i]!=0){
            for(int j =0 ;j < cnt[i];j++){
                cout<<i<<" ";
            }
        }
    }
}
// này o(n+m) nhưng k dùng đc cho số to hơn 1e7 và số âm
int main(){
    int n;cin>>n;
    int m = INT_MIN;
    int a[n];
    for(int i = 0;i < n;i++){
        cin>>a[i];
        m = max(m,a[i]);
    }
    countingsort(a,n,m);
    // for(int i = 0;i < n;i++){
    //     cout<<a[i];
    // }
}