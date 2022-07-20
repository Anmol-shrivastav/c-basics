#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int, int>& a,  pair<int, int>& b) 
{ 
    return a.second < b.second; 
} 

void sort(map<int, int>& M) 
{ 
    vector<pair<int, int> > A; 
  
    for (auto& it : M) { 
        A.push_back(it); 
    } 
   
    sort(A.begin(), A.end(), cmp); 
    
    map<int,int> :: iterator it;
    it = A.begin();
    cout<<it->first<<" ";
    it = A.end();
    cout<<it->first;
} 

map<int,int> getfreq(long long int ary[], long long int n,long long int sublen,map<int,int> freq){
    long long int xo = 0;
    for(long long int i=0; i+sublen-1<n; i++){
        long long int j = i;
        for(long long int k=1; k<=sublen; k++){
            xo = xo ^ ary[j];
            j++;
        }
        freq[xo]++;
        xo =0;
    }
    return freq;
}

int main(){
    long long int n;
    cin>>n;
    map<int,int> freq;
    long long int ary[n];
    for(long long int i=0; i<n; i++){
        cin>>ary[i];
        freq[ary[i]]++;
    }
    for(long long int i=2; i<=n; i++){
        freq = getfreq(ary,n,i,freq);
    }
    sort(freq);
    
    return 0;
}
