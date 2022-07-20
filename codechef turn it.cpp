#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
	    long long int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    long long int root = (u*u) - (2*a*s);
	    if(root <= v*v) cout<<"Yes"<<"\n";
	    else cout<<"No"<<"\n";
	}
	return 0;
}
