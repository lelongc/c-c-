#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
//pop
//size
//empty
//top
//push
int main(){
    stack <string> s;
    string c ="java python concu meo";
    stringstream ss(c);\
    string tmp;
    while(ss >> tmp)s.push(tmp);
    
   while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
   }
}