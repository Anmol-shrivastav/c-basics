#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findPrime(int num){
    int i,j;
    vector<int> prime;
    for(j=2; j<=num; j++){
        for(i=2; i*i <= j; i++){
            if(j % i == 0){
                break;
            }
        }
        if(i*i>j)
        prime.push_back(j);
    }
    return prime;
}

int main(){
    int t,num,count=0;
    cin>>t;
    while(t--){
        cin>>num;
        vector<int> ary = findPrime(num);
        sort(ary.begin(),ary.end());
        for(int i=0; i+2<ary.size(); i++){
            if(ary[i]+ary[i+1] == ary[i+2]){
                count++;
            }
        }
        cout<<count<<"\n";
        count=0;
    }
    return 0;
}
