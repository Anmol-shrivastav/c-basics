#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll get(ll d, ll r){
    while(r % d != 0){
        r--;
    }
    return r;
}

void solve(){
	int n;
	cin>>n;
	ll ary[n];
	ary[0] = 1;
	
	if(n > 1)
	    ary[1] = 2*n;
	    
	ll l = 2, r = (2*n)-1;
	for(int i=2; i<n; i++){
	    if(i % 2 == 0){
	        ary[i] = l;
	        l++;
	    }else{
	        int r = get(ary[i-1], r);
	        ary[i] = r;
	        r--;
	    }
	}
	
	
	for(int i=0; i<n; i++){
	    cout<<ary[i]<<" ";
	}
	cout<<"\n";
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
