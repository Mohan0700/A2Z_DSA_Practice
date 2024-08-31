#include<bits/stdc++.h>
using namespace std;

/*
    5 2 3 4 1
    2 3 4 1 5
    2 3 1 4 5
    2 1 3 4 5
    1 2 3 4 5

*/

void bubbleSort(int s, int e, int a[]){
    for(int i=0;i<=e;i++){
        int count=0;
        for(int j=0;j<e-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                count++;
            }
        }
        if(!count) break;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}