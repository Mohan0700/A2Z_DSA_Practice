#include<bits/stdc++.h>
using namespace std;

void reverse(int s, int e, int a[]){
    if(s>=e){
        return;
    }
    int temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    reverse(s+1,e-1,a);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}