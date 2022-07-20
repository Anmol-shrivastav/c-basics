#include<iostream>
using namespace std;
int main(){
	int n,i,k;
	cin>>n;
	int ary[n];
	for(i=0; i<n; i++){
		cin>>ary[i];
	}
	cin>>k;
	k = k % n;
	if(k < 0) k = n + k;
	if(k == n) for(i=0; i<n; i++) cout<<ary[i]<<" ";
	else{
		while(k--){
			for(i=n-1; i>0; i--){
				swap(ary[i],ary[i-1]);
			}
		}
		for(i=0; i<n; i++) cout<<ary[i]<<" ";
	}
	return 0;
}
