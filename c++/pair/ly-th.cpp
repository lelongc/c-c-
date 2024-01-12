#include <bits/stdc++.h>
using namespace std;
        //  pair<int, pair<char, int> > p1 = make_pair(28, make_pair('@', 100));
        //     cout << p1.first << endl;
        //     cout << p1.second.first << ' ' << p1.second.second << endl;

        //     pair<pair<int, int>, pair<int, int>> p2 = {{10, 20}, {30, 40}};

        ////  pair<int, int> c[3] = {{1, 2}, {2, 3}, {3, 4}}; // sử dụng mảng pair 

        //for(int i = 0;i < n;i++){
            //cin>>c[i].first>>c[i].second;
        //}
        // for(pair<int, int> it : c){
        //     cout << it.first << " " << it.second << endl;
        //
        
int main(){
    pair<int,int> p = make_pair(100,200);//{100,200}
    // tuple<int,int,int> t(1,2,3);
    // tuple<int,int,int> t{1,2,3};
    tuple<string,int,int> t = make_tuple("concu",2,3);
    //tuple<int,int,int> t = {1,2,3};

    //cout<< p.first;
    cout << get<0>(p);
    cout << get<2>(t);
}