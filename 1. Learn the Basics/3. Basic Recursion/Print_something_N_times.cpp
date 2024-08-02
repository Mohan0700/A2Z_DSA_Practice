#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        cout<<"Hello World"<<endl;
    }
}

void print2(int n){
    if(n==0){
        return;
    }
    cout<<"Hello World"<<endl;
    print2(n-1);
}

int main(){
    int n;
    cin>>n;
    print2(n);
    return 0;
}