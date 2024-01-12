#include <bits/stdc++.h>
using namespace std;
/// nhưng trg hợp nó đã sắp xếp sẵn thì nó sẽ swap nhiều dâ4n đến k tối ưu 
int lomuto(int a[],int l,int r){
    int p = a[r];//pivot chốt
    int i = l-1;
    for(int j = l;j < r;j++){
        if(a[j]<=p){
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[r]);
    return i;
}
// lười thì hc hoare đc rồi 
int hoare(int a[],int l,int r){
    int p = a[l];
    int i = l,j = r;
    while(1){
        while(a[i]<p)i++;
        while(a[j]>p)j--;
        if(i < j){
            swap(a[i],a[j]);
            i++;j--;// đi đến cặp tiếp theo 
        }
        else return j;
    }
}
void quicksort(int a[],int l,int r){ 
    if(l>=r)return;
    int q = hoare(a,l,r);
    quicksort(a,l,q);// hoare khác cái đến chỉ số p quicksort(a,l,q); còn lomuto là đến q-1;
    quicksort(a,q+1,r);
}

int main(){
    int n;cin>>n;
    int a[n];
    srand(time(NULL));
    for(int i = 0;i < n;i++){
        a[i]=rand()%1000;
    }
    quicksort(a,0,n-1);
    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    }

}