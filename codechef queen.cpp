#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define ll long long
using namespace std;

int main() {
	ll t,n,i,temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    map<ll,ll> mymap;
	    map<ll,ll> :: iterator itr;
	    for(i=0; i<n; i++){
	        cin>>temp;
	        mymap[temp]++;
	    }
	    vector<ll> ary;
	    for(itr = mymap.begin(); itr!=mymap.end(); itr++){
	    	//cout<<itr->first<<" -> "<<itr->second<<"\n";
	        ary.push_back(itr->second);
	    }
	    sort(ary.begin(),ary.end());
//        for(i=0; i<ary.size(); i++) cout<<ary[i]<<" ";
//        cout<<"\n";
	    for(i=0; i<ary.size()-1; i++){
	        if(ary[i] == ary[i+1]) break;
	    }
	    //cout<<"i -> "<<i<<"\n";
	    if(i == ary.size()-1) cout<<"Yes"<<"\n";
	    else cout<<"No"<<"\n";
	}
	return 0;
}

