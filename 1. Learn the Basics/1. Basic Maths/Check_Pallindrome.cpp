#include<bits/stdc++.h>
using namespace std;

//O(log10(n)+1) complexity 
bool checkPallindrome(int n){
    int originalNum = n;
    int reversed = 0;
    while(n!=0){
        int rem = n%10;
        reversed = reversed*10 + rem;
        n/=10;
    }
    return reversed==originalNum;
}

int main(){
    int n;
    cin>>n;
    if(checkPallindrome(n)){
        cout<<"Pallindrome Number";
    }
    else{
        cout<<"Not Pallindrome Number";
    }
    return 0;
}