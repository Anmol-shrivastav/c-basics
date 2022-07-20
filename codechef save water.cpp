#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y,c;
	    cin>>h>>x>>y>>c;
	    int res = y/2;
	    res+=x;
	    res*=h;
	    if(res <= c) cout<<"Yes"<<"\n";
	    else cout<<"No"<<"\n";
	}
	return 0;
}

