#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int fibo(int n){
    if(n<=1) return n;
    int a=0;
    int b=1;
    int next=a+b;
    for(int i=2;i<=n;i++){
        next=a+b;
        a=b;
        b=next;
    }
    return next;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}