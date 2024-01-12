#include <bits/stdc++.h>
using namespace std;
int main(){
    int m[5]={1,2,3,4,5};
    int a = 4 , b = 7;
    cout<< min(a,b)<<endl; // max cũng thế 
    
    cout << min({4,5,6,3,1}) << endl;

    cout << /* * nếu mún in giá trị  */min_element(m,m+5) << endl; /// này nó trả về con trỏ 
    // dủng cho mảng và vector dùng đc cho set nữa nhưng dùng lun begin đi kk
    // mảng thì trả về con trỏ vector thì iterator
    // mún trả về giá tri thì dùng giải tham chiếu 
    //max cũng thế 


    int sum  =accumulate(m,m+5,0); // tham số 3 là khởi tạo giá trị mún cộng vào tổng mảng //hàm này trog thư viện <numeric> chứ k phải algorithm 
    cout << sum  << endl; // dủng cho mảng và vector 


    //swap(a,b); hoán đổi a b 

    //sort//stablesort

    // find trả về con trỏ k thấy thì trả về con trỏ end 
    cout << find(m,m+5,3) - m; // tìm số 3

    //binary search chỉ dùng cho mảng đã sx

    // upper lower bound trả về con trỏ giống min element dùng dc cho set vector mảng 

    //memset(m,0,sizeof(m)) gán tất cả gía trị trong mảng 1 or 2 chiều bằng không có thể dùng vs -1 

    //fill(m,m+5,1000)// tất cả giá trị của mảng bằng 1000
    //fill(s.begin(),s.end(),1000); tất cả giá trị của vector bằng 1000
    // kiến thức kèm thêm 
    // nếu mún in ra 4.0 thì << fixed << setprecision(1) << a;
    // nếu mún in ra 0004 thì << setfill('0') << setw(4) << a;


    // vector <int> v1 ={1,2,3,4,5};
    // vector <int> v2 ={4,4,6,7,8};
    // vector <int> v3(10);
    // merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin())
    //để trộn v vào v3 thì để v3 ở chỉ số begin


    //reverse(a,a+n); a.begin(),a.end();


    //set_union //tìm hợp của 2 ..///
    // các phần tử 2 mảng or vec phải đc sắp xếp rồi 
    // vector <int> v1 ={1,2,3,4,5};
    // vector <int> v2 ={4,4,6,7,8};
    // vector <int> u(10);
    // auto it = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin())
    // hàm này nó trả về con trỏ là kích thước hay j đó 
    // khi hợp thì nó không đến 10 phần tử của mảng 3 đây nên ta cần chỉnh lại kích thước vector 
    // v3.resize(it - u.begin())

    // set_intersection thì tìm giao //phần tử giống nhau trong cả 2 mảng /// giống vậy thôi 
    // set_difference thì tìm phần tử chỉ có trong a mà k có trong b
    // set_symmetric_difference những phần tử của riêng 2 mảng (là hợp nhưng trừ giao )



}