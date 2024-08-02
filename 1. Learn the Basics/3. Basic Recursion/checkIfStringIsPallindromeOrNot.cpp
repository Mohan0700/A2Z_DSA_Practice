#include<bits/stdc++.h>
using namespace std;

bool reverse(int s, int e, string str){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]) return false;
    return reverse(s+1,e-1,str);
}

int main(){
    string s;
    cin>>s;
    cout<<boolalpha<<reverse(0,s.size()-1,s);
    return 0;
}