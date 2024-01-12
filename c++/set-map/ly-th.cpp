#include <iostream>
#include <set>
#include <map>

//copy(mySet.begin(), mySet.end(), myArray) // copy set vô mảng 
// copy set vô vector vector <int> v(s.begin(),s.end());
using namespace std;
int main(){
    set<int> s;// giống vector nhưng khác tí 
    // s.insert(100);
    // s.insert(200);
    // s.insert(100);
    //thì trong set vẫn là <100,200> // do không lưu giá trị trùng nên dùng để đếm các phần tử khác nhau nó tiện 
    // set sắp xếp từ bé đến lớn // unordered_set từ lớn đến bé 

    // cout << s.size()<< endl;

    // if(s.count(100)!=0)cout<<"found";
    // else cout<<"not found";
    
    //if(s.find(100)!=s.end())cout<<"found";  // find trỏ đến iterator trong set nếu k thấy trả về iterator cuối là end();
    //else cout<<"not found";

    
    // for(int i = 10;i > 0;i--){
    //     s.insert(i);
    // }
    // s.insert(5);
    // s.erase(5);// xóa tất cả số 5 khỏi set // s.erase(s.find(5))// xoá tại itarator của số 5 đầu tiên 

    //for(int x : s)cout<<x<<" \n"; // auto cũng đc 
    // for(set<int>::iterator i = s.begin();i!=s.end();i++)cout<< *i << " ";
     //distance(ms.begin(), i) in ra vị trí ủa i
     
    //cout <<*s.rbegin();// *s.begin() //set không dùng đc back 

    // nhập các phần tử cho set
    //int n;
    //for(int i = 0;i <n;i++){
        // int x; cin >> x;//getline(cin,tmp) nếu nhập string cho set ? lưu ý nó sẽ sắp xếp từng từ theo thứ tự từ điển tăng dần
        // s.insert(x);
    //}

    // multiset<int> m = {100,200,300,300,300,600};  // các phần tử có thể  giống nhau 
    // for(int x : m)cout<<x << " ";

    // chú ý nếu dùng erase xóa thì nó sẽ xóa hết các phần tử luôn 
    //m.erase(300);

    // nếu mún xóa 1 số 300 đầu thôi thì xóa qua iterator 
   // m.erase(m.find(300));// xóa só đầu 

    //cout<<m.count(300);// đếm số phàn tử trong mảng nếu k có thì bằng 0

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //map giống set nhưng lưu các pair // lưu các key theo giá trị tăng dần 
    //map cũng dùng rbegin 

    // map lưu 1 cặp key value
    // map <int,int> m;

    // m[100]=200;
    // m[200]=300;//m.insert({200,300}); size = 2        // riêng multimap chỉ dùng insert đc thôi 
    // m[100]=300;// lúc này thì size của map vẫn là 2 nhưng thay đổi value của key 100

    // for(pair<int,int> x : m)cout<< x.first << x.second << endl;// xuất ra mỗi phần tử của map mà mỗi phần tử của map là pair nên để pair
    // for(auto x : m)cout<< x.first << x.second <<" ";
    // for(map<int,int>::iterator i = m.begin();i!=m.end();i++)cout<<(*it).first<< " "<<(*it).second;

    //m.erase(100); // xóa cả cặp key value ta chỉ định key vô
    //m.count(100) // =1 neu dung multimap thi count 100 = 2 // đếm key 

    // if(m.count(100)!=0)cout<<"f";// find != m.end();
    // else cout<<"notf";



    // đếmm tần xuất xuất hiện in ra nó cùng tần xuất 
   //vd 1 1 1 2 3 2 3 -4 ví dụ này nó sẽ in ra theo tăng dần key 

   //int n = 5;
   //for(int i= 0;i < n;i++){
    // int x; cin >> x;
    // m[x]++;// nghĩa là gặp 1 value nó sẽ tăng lên 1 gặp lần 2 nó tăng lên 2
    //}
    //for(auto x : m)cout<< x.first << x.second ;// dùng for each thì nó sẽ in 1 lần từ đó thôi 

    // nếu mún in ra theo thứ tự thì dùng mảng lưu lại 
    //vd 1 1 1 2 3 2 3 4
    //int a[100]
    //for(int i = 0;i <n ;i++){
        //cin>> a[i];
        //m[a[i]]++;

    //}
    // for(int i = 0;i <n ;i++){
    //     if(m[a[i]]!=0){
    //         cout << a[i]<<m[a[i]];
    //         m[a[i]]=0;// để ko in ra lần nữa 
    //     }
    // }


    



    
}