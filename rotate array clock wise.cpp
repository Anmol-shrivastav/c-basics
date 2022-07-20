#include<iostream>
using namespace std;

void rotate(int n, int ary[]){
	int temp = ary[n-1];
	for(int i=n-2; i>=0; i--){
		ary[i+1] = ary[i];
	}
	ary[0] = temp;
}

int main(){
	int n,k;
	cin>>n>>k;
	int ary[n];
	for(int i=0; i<n; i++){
		cin>>ary[i];
	}
	
	k = k % n;
	while(k--)
		rotate(n, ary);
		
	for(int i=0; i<n; i++){
		cout<<ary[i]<<" ";
	}
	return 0;
}
