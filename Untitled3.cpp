#include<iostream>
#define ll long long int
using namespace std;
int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	ll t,k,i,temp,sum,count,factor,tempfact;
	cin>>t;
	while(t--){
		cin>>k;
		factor = (4 * k) + 1;
		sum = count = 0;
		for(i = 2; i*i <= factor; i++){
			if(factor % i == 0){
				//cout<<"factor = "<<i<<"\n";
				temp = (2*k + 1 - 2) / i;
				count += temp;
				sum += temp * i;
				if(factor/i != i) {
                	tempfact = factor / i;
					temp = (2*k + 1 - 2) / tempfact;
					count += temp;
					sum += tempfact * temp;
            	}
			}
		}
		count++;
		//cout<<"count = "<<count<<" sum = "<<sum<<"\n";
		sum = (4*k + 1) + sum + (2*k - count);
		cout<<sum<<"\n";
	}
	return 0;
}
