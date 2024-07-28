#include<bits/stdc++.h>
using namespace std;

//O(log10(n)+1) complexity 
bool isArmstrongNumber(int n){
    int originalNum = n;

    int armstrong = 0;
    int power = int(log10(n)+1);
    while(n>0){
        int rem = n%10;
        armstrong += pow(rem , power);
        n/=10;
    }
    return (armstrong==originalNum);
}

int main(){
    int n;
    cin>>n;
    cout<<isArmstrongNumber(n);
    return 0;
}