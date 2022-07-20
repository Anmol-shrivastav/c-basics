#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll getSum(ll n, ll b){
	ll sum = 0;
	while(n != 0){
		sum += n % b;
		n /= b;
	}
	return sum;
}

ll solve(int n, int s, int e){
	ll sum = LLONG_MAX, i, currSum, base;
	if(e >= n)
		return n;
	for(i=e; i>=s; i--){
			
		currSum = getSum(n, i);

		if(currSum <= sum){
			sum = currSum;
			base = i;
		}
	}
	
	return base;
}

int main(){
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
	ll t,n,s,e,base;
	cin>>t;
	while(t--){
		cin>>n>>s>>e;

		base = solve(n,s,e);
		cout<<base<<"\n";
	}
	return 0;
}
