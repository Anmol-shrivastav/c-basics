#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	int ary[n];
	for(int i=0; i<n; i++){
		cin>>ary[i];
	}
	cin>>k;
	if(k > n){
		k = k % n;
	} else if(k < 0){
		k = n + k;
	}
	for(int i=1; i<=k; i++){
	    int temp = ary[n-1];
	    for(int j=n-2; j>=0; j--){
	    	ary[j+1] = ary[j];
		}
		ary[0] = temp;
	}
	for(int i=0; i<n; i++){
		cout<<ary[i]<<" ";
	}
	return 0;
}
