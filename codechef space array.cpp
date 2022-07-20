#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ary[n];
		for(long long int i=0; i<n; i++){
			cin>>ary[i];
		}
		long long int count = 0;
		for(long long int i=1; i<n; i++){
			if(ary[i] == ary[i-1]){
				ary[i]++;
				count++;
			}else if(ary[i] < ary[i-1]){
				long long int diff = ary[i-1] - ary[i];
				diff++;
				ary[i] += diff;
				count += diff;
			}
		}
		if(count % 2 == 0){
			cout<<"Second"<<"\n";
		} else{
			cout<<"First"<<"\n";
		}
	}
	return 0;
}
