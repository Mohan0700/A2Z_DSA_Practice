#include<bits/stdc++.h>
using namespace std;

//O(log10(n)+1) complexity 
int countDigits(int n){
    int digits = 0;
    while(n!=0){
        digits++;
        n/=10;
    }
    return digits;
}

// O(1) complexity but will only work for positive not for 0 and negative numbers.
int countDigits2(int n){
    if(n==0) return 0;
    else if(n<0) n*=-1;
    return (int)(log10(n)+1);
}

int main(){
    int n;
    cin>>n;
    cout<< countDigits2(n);
    return 0;
}