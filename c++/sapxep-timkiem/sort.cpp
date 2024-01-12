//int a[n]//sort(a,a+n) // sắp xếp mảng tăng dần //a.begin(),a.end() // này sắp xếp vector 
// sort(a,a+n,greater<int>()) giảm dần // int là kiểu của mảng int a[n];
// tham số 3 giống như hàm quicksort trong c nhưng dùng bool thay vì -1 0 1
    // bool cmp(int a,int a){
    //     return a < b;
    // }

// stablesort giống sort nhưng nếu cùng tiêu chí nó vẫn giữ nguyên thứ tự xuất hiện 
// vd   (111, 9, 3000, 18, 81, 1002, 2002)- > (111, 3000, 1002, 2002, 9, 18, 81 )