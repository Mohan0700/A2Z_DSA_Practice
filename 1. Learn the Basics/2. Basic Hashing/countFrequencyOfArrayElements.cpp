#include<bits/stdc++.h>
using namespace std;

//O(n) time complexity  O(n) space complexity    //max array size can be 10^7 only
void countFrequency(int n , vector<int> a){
    vector<int> ans(n+1,0);
    for(int i=0;i<n;i++){
        ans[a[i]]++;
    }
    for(int i=0;i<=n;i++){
        cout<<ans[i]<<" ";
    }
}
//O(nlogn) time complexity  O(n) space complexity
void countFrequency2(int n, vector<int> a){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto i:mp){
        cout<<i.first <<" "<<i.second<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countFrequency2(n , arr);
    return 0;
}