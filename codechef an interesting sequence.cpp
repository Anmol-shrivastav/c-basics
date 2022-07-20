#include<iostream>
#define ll long long int
using namespace std;

//ll sequence[2000001];

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


int main(){
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
	ll t,k,doublek,i,sum = 0,temp;
	doublek = 2000000;
//	for(i=0; i<=doublek; i++){
//		sequence[i] = ((i+1) *  (i+1));
//	}	
	
	cin>>t;
	while(t--){
		sum = 0;
		cin>>k;
		//gcd
		doublek = k * 2;
		ll ans[doublek];
		cout<<"GCD = "<<"\n";
		for(i=0; i<doublek; i++){
			temp = gcd(((i+1) * (i+1))+k, ((i+2) * (i+2))+k);
			cout<<temp<<" ";
			sum += temp;
			ans[i] = sum;
		}
		cout<<"\n";
		//cout<<"ans = "<<sum<<"\n";
		cout<<ans[doublek-1]<<"\n";
	}
	return 0;
}
