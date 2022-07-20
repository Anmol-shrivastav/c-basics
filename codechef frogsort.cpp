#include<iostream>
#include<algorithm>
using namespace std;

int findMyValue(int W[], int data, int n){
	for(int i=0; i<n; i++){
		if(W[i] == data){
			return i;
		}
	}
}

int main(){
	int t,i,j,k,n,temp;
	cin>>t;
	while(t--){
		int W[500] = {0};
		int L[500] = {0};
		int count = 0;
		cin>>n;
		int S[n];
		int end  = n;
		for(i=0; i<n; i++){
			cin>>temp;
			W[i] = S[i] = temp;
		}
		for(i=0; i<n; i++){
			cin>>L[i];
		}
		int l = sizeof(S)/sizeof(S[0]);
		sort(S,S+l);
		int pos[n];
		for(i=0; i<n; i++){
			pos[i] = i;
		}
		for(i=1; i<n; i++){
		    int fndidx = findMyValue(W,S[i],n);
		    int len = L[fndidx];
		    temp = fndidx;
		    int p = pos[findMyValue(W,S[i-1],n)];
		    while(fndidx <= p){
		    	fndidx += len;
		    	count++;
		    	pos[temp] = fndidx; 
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
