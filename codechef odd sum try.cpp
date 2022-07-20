#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t, n, sum;
	cin>>t;
	while(t--){
	    cin>>n;
	    
	    if(n == 1 || n == 2){
	        cout<<1<<"\n";
	        continue;
	    }
	    sum = (n-2) * (4 + (n - 3) * 2);
	    sum /= 2;
	    sum++;
	    cout<<sum<<"\n";
	}
	return 0;
}

