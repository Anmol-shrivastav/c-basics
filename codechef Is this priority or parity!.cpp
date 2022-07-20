#include<iostream>
#include<vector>
using namespace std;


void goOnARide(vector<long long int> &v, long long int k){
	long long int r = k % v.size();
	vector<long long int>::iterator i;
	
	if(r == 0){
//		last element ko delete kro
		i = v.begin() + (v.size() - 1);
	}else{
//		(begin + r-1)th element ko delete kro 
		i = v.begin() + (r - 1); 
	}
	
	v.erase(i);
}

string solve(long long int n, long long int k){
	vector<long long int> v(n);
	for(long long int i=0; i<n; i++) v[i] = i+1;
	
	while(v.size() > 1){
		goOnARide(v, k);
	}
	
	return v[0] % 2 == 0 ? "EVEN" : "ODD";
}

int main(){
	int t;
	string ans;
	long long int n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ans = solve(n, k);
		cout<<ans<<"\n";
	}
	return 0;
}
