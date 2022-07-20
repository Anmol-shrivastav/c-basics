#include<iostream>
#define ll long long int
using namespace std;

ll getMyAns(ll n, ll m){
	ll a,b,count=n-1,mmoda,mmodb,part1;
	for(a=2; a<=n; a++){
		for(b=a+1; b<=n; b++){
			if(b%a == 0){
				//cout<<"A = "<<a<<" b = "<<b<<" Yes "<<"\n";
				count++;
			}else{
				mmoda = m % a;
				mmodb = m % b;
				part1 = mmoda == b ? 0 : mmoda;
				if((part1) == (mmodb % a)){
					//cout<<"A = "<<a<<" b = "<<b<<" Yes "<<"====================b%a!=0\n";
					//cout<<"mmoda = "<<mmoda<<" modb = "<<mmodb<<" A = "<<a<<" B = "<<b<<"----------Yes\n";
					count++;
				}
//				else{
//					cout<<"A = "<<a<<" b = "<<b<<" No "<<"\n";
//				}
				
			}
		}
	}
	return count;
}

int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	ll t,n,m,ans;
	cin>>t;
	while(t--){
		cin>>n>>m;
		ans = getMyAns(n,m);
		cout<<"ans = "<<ans<<"\n";
	}
	return 0;
}
