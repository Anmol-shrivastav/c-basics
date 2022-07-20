#include<iostream>
using namespace std;
int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	int t,k,i,temp,sum,count,factor;
	cin>>t;
	while(t--){
		cin>>k;
		factor = (4 * k) + 1;
		sum = count = 0;
		for(i = 2; i*i < factor; i++){
			if(factor % i == 0){
				cout<<"factor = "<<i<<"\n";
				temp = (2*k + 1 - 2) / i;
				count += temp;
				sum += temp * i;
			}
		}
		count++;
		cout<<"count = "<<count<<" sum = "<<sum<<"\n";
		sum = (4*k + 1) + sum + (2*k - count);
		cout<<"ans = "<<sum<<"\n";
	}
	return 0;
}
