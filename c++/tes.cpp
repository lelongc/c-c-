#include<bits/stdc++.h>
using namespace std;

bool cmp(string  a, string b){
    string l = a+b;
    string r = b+a;
    int x = stoi(l);
    int y = stoi(r);
    if(x < y)return false;
    return true;
}

int main(){

	vector <string> s;
	
	string x;
	getline(cin,x);
	stringstream ss(x);
	string tmp;
	while(ss >> tmp){
        s.push_back(tmp);
    }

    sort(s.begin(),s.end(),cmp);
    for(string  x : s)cout<<x;
		
	
	

}