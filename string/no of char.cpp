#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;
 
void freq(string str, map<char, int>& m){
    for(int i=0;i<str.length();i++)
    {
    	 m[str[i]]++;
	}
}
 
int main() {
    string str;
    cout<<"enter string:";
    getline(cin,str);
    map<char, int> m;
    freq(str, m);
    for(auto x: m) {
    	if(x.second >9){
    		x.second=x.second-9;
    		cout<<"9"<<x.first<<x.second<<x.first;
		}
		else
        cout << x.second<<x.first<< endl;
    }
}
