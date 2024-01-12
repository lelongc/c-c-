#include <bits/stdc++.h>
using namespace std;
//vector<int> v = {1, 2, 3, 4, 5};
    //Chen vao chi so 3
    //2 hàm này cần truyền iterator 
    //v.insert(v.begin() + 3, 28);   in ra 1 2 3 28 4 5
    // v.erase(v.begin() + 3); in ra 1 2 3 5

    //v.clear(); in ra size là 0 

    //v1.assign(5, 28); in ra 28 28 28 28 28
    //v2.assign(v1.begin(), v1.begin() + 3); in ra 28 28 28

    // vector<int> v1 = {1, 2, 3, 4, 5, 6};
    // vector<int> v2 = {100, 200, 300, 400, 500};
    // v1.swap(v2); in ra v1 thì 100 200 300 400 500

    //it - v.begin() in ra vị trí đang chỉ tới trong vector 

//vector<int> a
    // for{
    //     int x; cin >> x; a.push_back(x);
    // }

// vector<int> a(n)
    // for{
    //     cin >> a[i];
    // }

//vector<int> a(n,100)  tất cả phần tử trg vect là 100

//a.push_back(?)

//a.size()

//a[a.size - 1] == a.back()

//a[2]=*(a.begin()+2)=v.at(2)

//v.begin() v.end()   vi tri sau phan tu cuoi cung )

//iterator con trỏ kiểu pro 
int main(){
    // vector<int> a;
    // a.push_back(70);
    // a.push_back(10);
    // for(int i = 0;i < a.size();i++)cout << a[i];
    // for(int x :a)cout<<x;
    // for(vector<int>::iterator/*auto i */ i = a.begin() ;i != a.end();i++){
    //     cout << *i;
    // }

    // ta có thể sử dụng mảng vector 
    // int n;cin>>n;
    // vector<int> a[n];
    // 1 2 
    // 2 3 4
    // 1 4 
    // 1 6 7 8 9

    // for(int i = 0;i < n;i++){
    //     int m;cin>>m;
    //     for(int  j=0 ;j < m;j++){
    //         int k;cin>>k;
    //         a[i].push_back(k);
    //     }
    // }

    //for(int i = 0;i < n;i++){
        //for(int i = 0;i < a[i].size();i++){
            //cout<<a[i];
        //}
        // for(int x : a[i]){
        //     cout << x << " ";
        // }
        // cout<<"\n";
    //}


    //vd int a[100]={1,2,3};
    //vector<int> v(a,a+n);//copy nd của mảng vô vector

    
   
    
}