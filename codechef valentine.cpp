#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	ll t,n,temp,i,j,sum;
	cin>>t;
	while(t--){
	    cin>>n;
	    ll a[n],b[n];
	    for(i=0; i<n; i++){
	    	cin>>a[i];
	    }
	    for(i=0; i<n; i++){
	    	cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    i = 0;
	    j = n-1;
	    sum = a[i] + b[j];
	    j--;
	    i++;
	    while(j >= 0){
	       if(a[i]+b[j] > sum) sum = a[i]+b[j];
	       i++;
	       j--;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}

