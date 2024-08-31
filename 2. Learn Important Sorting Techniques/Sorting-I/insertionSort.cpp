#include<bits/stdc++.h>
using namespace std;

void insertionSort(int e, int a[]){
    for(int i=0;i<=e;i++){
        int j=i;
        while(j-1>=0 && a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}