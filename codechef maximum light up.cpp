#include<iostream>
using namespace std;
int main(){
	int t, p, a, b, c, x, y, ans;
	cin>>t;
	while(t--){
		cin>>p>>a>>b>>c>>x>>y;
		ans  = min(x*a+b, y*a+c);
		ans = p / ans;
		cout<<ans<<"\n";
	}
	return 0;
}
