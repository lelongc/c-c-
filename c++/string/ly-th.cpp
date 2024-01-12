#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //string s = "con cu";
    //cin >> s;// k đọc từ dấu cách trở đi 

    //cin.ignore(1);// đọc 1 kí tự trong bộ nhớ đệm vì ở trên có cin 

   // getline(cin,s);// đọc dấu cách 

   // cout << s;
   // cout <<s[1]; // giống mảng char thôi 

   // cout << s.length(); hoặc s.size();

//    for(int i = 0;i < s.length();i++){
//         cout << s[i] << endl;
//    }

//    for(char x : s){
//     cout << x;
//    }

    // string a = "con meo ";
    // string b = "ngu";
    // string c = a+b;// a+=b;
    // cout << c;// cout <<a;
    
    // string a= "abc";
    // string b = "abcd";
   
    // string c = b.substr(1,3); nếu chỉ truyền số 1 tham số nó sẽ lấy đến hết
    // cout << c;

    // cout << boolalpha << (a < b);//a.compare(b);// hàm này trả về -1 0 1 giống strcmp
    //if(a < b)cout << "CC";// so sánh theo thứ tự từ điển;

    // string d = " 123445"
    //stoi//stoll(d); // chuyển str sang int giống atoi bên c

    // int n = 122345;
    // string s = to_string(n);

    //  string s = "con cu nung";
    //  string k ="con.cuc.nung";
    //k.pop_back() xóa phần tử cúi cùng g đi 
    
    // stringstream ss(k);
    // string tmp;
    //while(ss >> tmp)cout<<tmp<<endl;// dùng tách dấu cách 
   // while(getline(ss,tmp,'.'))cout<<tmp<<endl;//dùng tách mọi thứ 

   // mảng string
   int n;cin>>n;
   cin.ignore(1);
   string a[n];
   for(int i = 0;i < n;i++){
    getline(cin,a[i]);
   }
   for(int i = 0;i < n;i++){
    cout<< a[i]<<endl;
   }

    // int n,m;
    // cin>>n>>m;
    // int a[n][m] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };
    // int cnt = 1;
    // for(int i = 0;i <m ;i++){
    //     for(int j =0 ;j < n;j++){
    //         cout <<a[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }




}