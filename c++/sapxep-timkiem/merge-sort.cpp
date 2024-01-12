#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m ,int r){// dùng đc với mảng đã sx
    vector <int> v1(a+l,a+m+1);
    vector <int> v2(a+m+1,a+r+1);
    int i = 0,j = 0,k = l;
    while(i < v1.size() && j < v2.size()){
        if(v1[i]>v2[j]){
            a[k++]=v2[j++];
        }
        else {
            a[k++]=v1[i++];
        }
    }
    while(i < v1.size())a[k++]=v1[i++];
    while(j < v2.size())a[k++]=v2[j++];
}
void mergesort(int a[],int l,int r){
    if(l >= r) return;
    int m = (l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
    
   
}
void mg(int a[],int l,int m,int r){ 
    vector <int> v1(a+l,a+m+1);
    vector <int> v2(a+m+1,a+r+1);
    
    int i = 0,j = 0,k=l;
    while(i < v1.size() && j < v2.size()){
        if(v1[i]>v2[j]){
            a[k++]=v2[j++];
        }
        else if(v1[i]<v2[j]){
            a[k++]=v1[i++];
        }
    }
    while(i < v1.size())a[k++]=v1[i++];
     while(j < v2.size())a[k++]=v2[j++];
}
void ms(int a[],int l,int r){
    if(l >= r)return;
    int m = (l+r)/2;
    ms(a,l,m);
    ms(a,m+1,r);
    mg(a,l,m,r);
}
int main(){
    int a[6]={8,7,1,9,2,3};
    ms(a,0,6-1);
    for(int x : a)cout<<x<<" ";

}