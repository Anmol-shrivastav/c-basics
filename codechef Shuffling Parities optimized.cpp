#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,arrayEvenCount, arrayOddCount,nEvenCount,nOddCount,ans,temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    arrayEvenCount = arrayOddCount = 0;
	    for(int i=0; i<n; i++){
	        cin>>temp;
	        if(temp % 2 == 0)
	            arrayEvenCount++;
	       else
	            arrayOddCount++;
	    }
	    
	    //===============================================
	    if(n % 2 == 0){
	        nEvenCount = nOddCount = n / 2;
	    }else{
	        nEvenCount = n / 2;
	        nOddCount = nEvenCount +  1;
	    }
	    
	    //===============================================
	    ans = 0;
	    if(arrayEvenCount <= nOddCount){
	        ans += arrayEvenCount;
	    }else{
	        ans += nOddCount;
	    }
	    
	    if(arrayOddCount <= nEvenCount){
	        ans += arrayOddCount;
	    }else{
	        ans += nEvenCount;
	    }
	    
	    cout<<ans<<"\n";
	    
	}
	return 0;
}

