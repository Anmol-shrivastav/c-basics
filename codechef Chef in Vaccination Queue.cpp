#include<iostream>
using namespace std;
int main(){
	int t, n, p, x, y, ans;
	cin>>t;
	while(t--){
		cin>>n>>p>>x>>y;
		ans = 0;
		int ary[n];
		for(int i=0; i<n; i++){
			cin>>ary[i];
		}
		
		p--;
		for(int i=0; i<=p; i++){
			if(ary[i] == 1){
				ans += y;
			}else{
				ans += x;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
