#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int> &arr,vector<int> &ary){
    vector<int> res;
    int i = 0;
    int j = 0;
    
    while(i < arr.size() && j < ary.size()){
        if(arr[i] < ary[j]){
            res.push_back(arr[i]);
            i++;
        } else {
            res.push_back(ary[j]);
            j++;
        }
    }
    while(i < arr.size()){
        res.push_back(arr[i]);
        i++;
    }
    while(j < ary.size()){
        res.push_back(ary[j]);
        j++;
    }
    return res;
}

int main(){
    int n,m,temp;
    vector<int> arr;
    vector<int> ary;
    vector<int> ans;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>temp;
        ary.push_back(temp);
    }
    ans = mergeTwoSortedArray(arr,ary);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}
