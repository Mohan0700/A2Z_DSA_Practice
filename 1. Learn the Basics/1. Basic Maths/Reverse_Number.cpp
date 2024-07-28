#include<bits/stdc++.h>
using namespace std;

//O(log10(n)+1) complexity 
int reverseNumber(int n){
    int reversed = 0;
    while(n!=0){
        int rem = n%10;
        reversed = reversed*10 + rem;
        n/=10;
    }
    return reversed;
}

int main(){
    int n;
    cin>>n;
    cout<< reverseNumber(n);
    return 0;
}