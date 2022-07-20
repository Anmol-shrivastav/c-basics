#include<iostream>
#define ll long long
using namespace std;
int getMyAns(ll ary[], ll n){
    for(ll i=0; i<n; i++){
        if(ary[i] == 2) return 1;
    }
    return -1;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,sum = 0;
        cin>>n;
        ll ary[n];
        for(ll i=0; i<n; i++){
            cin>>ary[i];
            sum += ary[i];
        }
        if(sum % 2 == 0) cout<<"0"<<"\n";
        else{
            ll ans = getMyAns(ary,n);
            cout<<ans<<"\n";
        }
    }
    return 0;
}
