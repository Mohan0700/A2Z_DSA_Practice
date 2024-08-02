#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=n;i>0;i--){
        cout<<i<<endl;
    }
}

void print2(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print2(n-1);    
}

int main(){
    int n;
    cin>>n;
    print2(n);
    return 0;
}