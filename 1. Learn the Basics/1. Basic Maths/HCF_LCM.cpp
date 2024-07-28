#include<bits/stdc++.h>
using namespace std;

//O(min(n,m)) complexity 
int HCF(int n,int m){
    int hcf = 1;
    for(int i=2;i<=min(n,m);i++){
        if(n%i==0 && m%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int HCF2(int n, int m){
    while(n!=0 && m!=0){
        if(n>m){
            n%=m;
        }
        else{
            m%=n;
        }
    }
    if(n){
        return n;
    }
    return m;
}

int LCM(int n , int m){
    return (n * m)/(HCF(n,m));
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<< LCM(a,b);
    return 0;
}