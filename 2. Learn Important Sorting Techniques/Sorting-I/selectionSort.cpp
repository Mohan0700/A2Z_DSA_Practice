#include<bits/stdc++.h>
using namespace std;

/*
    2 1 4 3 5
    1 2 4 3 5
    1 2 4 3 5
    1 2 3 4 5

*/

void selectionSort(int e, int a[]){
    for(int i=0;i<e;i++){
        int mini = i;
        for(int j=i+1;j<=e;j++){
            if(a[j]<a[mini]){
                mini=j;
            }
        }
        swap(a[i],a[mini]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}