#include<iostream>
#include<string>
#include<vector>
using namespace std;

int findMax(int arr[], int max, int idx , int n) {
    if(idx == n) return -1e9;
    int max1 = findMax(arr,max,idx+1, n);
    if(arr[idx] > max1){
        max1 = arr[idx];
    }
    return max1;
}

int main(){
    int i,n,max=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = findMax(arr,max,0,n);
    cout<<ans;
    return 0;
}
