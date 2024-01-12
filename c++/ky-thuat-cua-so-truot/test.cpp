#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,b;cin>>n>>k>>b;
    int a[100]= {0};
    for(int i = 0;i < b;i++){
        int x;cin>>x;
        a[x]=1;
    }
    int hong = 0;
    for(int i = 1;i <= k;i++){
        if(a[i]==1)hong++;
    }
    
    int ans = hong;
    for(int i = k+1;i <= n;i++){
        hong = hong - a[i-k] + a[i];
        ans = min(ans,hong);
    }
    cout<< ans;
   
}