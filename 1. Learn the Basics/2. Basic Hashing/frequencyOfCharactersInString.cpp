#include<bits/stdc++.h>
using namespace std;

void countFrequency(string n){
    int arr[26]={0};
    for(int i=0;i<n.size();i++){
        arr[n[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
}

void countFrequency2(string n){
    map<char,int> mp;
    for(int i=0;i<n.size();i++){
        mp[n[i]]++;
    }
    for(auto i:mp){
        cout<<i.first <<" "<<i.second<<endl;
    }
}

int main(){
    string n;
    cin>>n;
    countFrequency2(n);
    return 0;
}