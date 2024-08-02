#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }
}

void print2(int n){
    if(n==0){
        return;
    }
    print2(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    print2(n);
    return 0;
}