#include<bits/stdc++.h>
using namespace std;

//O(n) complexity 
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// O(sqrt(n)) complexity 
int isPrime2(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    cout<< isPrime2(n);
    return 0;
}