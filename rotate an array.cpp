#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,r;
	    cin>>n>>r;
	    int ary[n];
	    for(int i=0; i<n; i++){
	        cin>>ary[i];
	    }
	    r = r % n;
	    int ans[n];
	    int j,i;
	    if(r==0){
	    	for(i=0; i<n; i++){
	            cout<<ary[i]<<" ";
	        }
		}else{
			for(i=r,j=0; i<n; i++,j++){
	            ans[j] = ary[i];
	        }
	        for(i=0; i<r; i++,j++){
	            ans[j] = ary[i];
	        }
	        for(i=0; i<n; i++){
	            cout<<ans[i]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
