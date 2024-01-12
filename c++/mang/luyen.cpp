#include <bits/stdc++.h>
#define max 1000000000
#define min -1000000000

using namespace std;
bool ucln(int a,int b){
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a == 1;
}
int main(){
     int n = 12;
    int a[12] = {1, 2, 2, 2, 5, 3, 5, 8, 7, 4, 4, 4};
    int dem[100]={0};
    int ma = 0;
    for(int i = 0;i < n;i++){
        dem[a[i]]++;
        if(dem[a[i]]>ma)ma = dem[a[i]];
    }
    for(int i = 0;i < n;i++){
        if(dem[a[i]]==ma){
            cout<<a[i]<<" ";
        }
    }
    

}