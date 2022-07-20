#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,x,jump,a,b;
	string ans;
	cin>>t;
	while(t--){
		cin>>n>>x>>jump;
		ans = "No";
		n = n + 1;
		if(x == 0 || x == n){
			ans = "Yes";
		}else if(ans == "No"){
			b = x / jump;
			if(x % jump == 0){
				if(b * jump <= n)
					ans = "Yes";
			}
		}else{
			a = (n - x) / jump;
			if((n - x) % jump == 0){
				if(n - (a * jump) >= 0)
					ans = "Yes";
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
