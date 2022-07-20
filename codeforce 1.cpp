#include<iostream>
using namespace std;

int checkMyArray(int n, int ary[]){
	int i=0,replace=0,count=0;
	for(i=1; i<n-1; i++){
		if(ary[i] > ary[i+1] && ary[i] > ary[i-1]){
			count++;
			if(ary[i+1] < ary[i+2] && replace==0){
				ary[i+1] = ary[i];
				replace++;
				count--;
			}
			
		} else if(ary[i] < ary[i+1] && ary[i] < ary[i-1]){
			count++
			if(ary[i+1] > ary[i+2] && replace==0){
				ary[i+1] = ary[i+2];
				replace++;
				count--;
			}
		}
	}
	return count;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int ary[n];
		for(int i=0; i<n; i++){
			cin>>ary[i];
		}
		int ans = checkMyArray(n,ary);
		cout<<ans<<"\n";
	}
	return 0;
}
