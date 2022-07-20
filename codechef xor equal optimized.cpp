#include<iostream>
#include<map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t,n,x,tempXor,maxEquals,minOp,currEquals,currOp;
	cin>>t;
	while(t--){
		cin>>n>>x;
		long long int ary[n];
		map<long long int,long long int> map1;
		map<long long int,long long int> map2;
		for(long long int i=0; i<n; i++){
			cin>>ary[i];
			
			map1[ary[i]]++;
			
			tempXor = ary[i] xor x;
			
			map2[tempXor]++;
		}
		
		maxEquals = minOp = currEquals = currOp = 0;
		map<long long int,long long int> :: iterator i, j;
		
	   // for(i = map1.begin(); i!=map1.end(); i++){
	   //     cout<<i->first<<" "<<i->second<<"\n";
	   // }
	   // for(i = map2.begin(); i!=map2.end(); i++){
	   //     cout<<i->first<<" "<<i->second<<"\n";
	   // }
	   
		for(i = map1.begin(); i!=map1.end(); i++){
	        if(i->second > maxEquals){
	            maxEquals = i->second;
	            minOp = 0;
	        }
	    }
	    
	    if(x == 0){
	        cout<<maxEquals<<" "<<0<<"\n";
	        continue;
	    }
	    
		for(i = map1.begin(); i!=map1.end(); i++){
		    
		    j = map2.find(i->first);
		    
			if(j != map2.end()){
				currEquals = i->second + j->second;
				currOp = j->second;
				
				if(maxEquals < currEquals){
					maxEquals = currEquals;
					minOp = currOp;
				}else if(maxEquals == currEquals && minOp > currOp){
					minOp = currOp;
				}
			}
			
		}
		
	    
	    for(i = map2.begin(); i!=map2.end(); i++){
	        if(i->second > maxEquals){
	            maxEquals = minOp = i->second;
	        }
	    }
	    
		cout<<maxEquals<<" "<<minOp<<"\n";
		
	}
	return 0;
}
