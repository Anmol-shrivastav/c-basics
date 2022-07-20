#include <bits/stdc++.h>
using namespace std;

double roundMy(double var) {
	double value = (int)(var * 100 + .5);
	return (double)value / 100;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        double mul = k1 * k2 * k3 * v;
        //cout<<"mul = "<<mul<<"\n";
        mul = 100 / mul;
        //cout<<"mul div 100 = "<<mul<<"\n";
        double ans = roundMy(mul);
        //cout<<"mul round = "<<ans<<"\n";
        //ans += 0.000000000000000001;
        if(ans < 9.58) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
	
	return 0;
}

