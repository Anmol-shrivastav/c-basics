#include <iostream>
#define ll long long
using namespace std;

ll getMyAns(ll n){
    ll fourth = 60;
    ll level = n / 4;
    ll order = n % 4;
    
    if(order == 0) level--;
    
    while(level-- > 1) fourth += 44;
    
    if(order==1) return (fourth + 16);
	else if(order==2) return (fourth + 28);
	else if(order==3) return (fourth + 39);
	return (fourth + 44);
}

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if(n==1) cout<<20<<"\n";
	    else if(n==2) cout<<36<<"\n";
	    else if(n==3) cout<<51<<"\n";
	    else if(n==4) cout<<60<<"\n";
	    else{
	        ll ans = getMyAns(n);
	        cout<<ans<<"\n";
	    }
	}
	return 0;
}

