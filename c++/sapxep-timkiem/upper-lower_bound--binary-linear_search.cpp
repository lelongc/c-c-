//vector <int> v; binary_search(v.begin(),v.end(),x); 
//int a[n];  binary_search(a,a+n,x);;
// upper_bound((v.begin(),v.end(),x) tìm phần tử lớn hơn x || v.upper_bound(x);
// lower_bound thì lớn hơn bằng 
//auto it = lower_bound thì lớn hơn bằng || auto = int *it 
//**** upper và lower bound trả về con trỏ iterator j đó nên cần thêm * nếu mún trả về giá trị 

///*it giá trị 
////  it - a vị trí || với vector thì it - a.begin() or set map vector thì distance(a.begin(),it) 
///  it == (a+n) || nếu vector a.end() không tìm thấy

// int bns(int a[],int n, int x){
//     int l = 0, r = n-1;
//     int i = 0;
//     while(l <= r){
//         int m = (r+l)/2;
//         if(a[m] == x)return 1;
//         else if(a[m]<x)l=m+1;
//         else if(a[m]>x)r=m-1;
//     }
//     return 0;
// }