#include<bits/stdc++.h>
using namespace std;

//O(n) complexity 
void printDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

// O(sqrt(n)) complexity 
void printDivisors2(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    printDivisors2(n);
    return 0;
}