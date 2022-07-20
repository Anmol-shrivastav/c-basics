#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll t,m,n,k,a,count,i,j,b,c;
	double temp,sum=0.0;
	cin>>t;
	while(t--){
		cin>>m>>n>>k;
		count = 0;
		ll ary[m][n];
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				cin>>ary[i][j];
				if(ary[i][j] >= k) count++;
			}
		}
		//cout<<count<<"\n";
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				a = 1;
				while(a < 10000000000){
					if(i+a < m && j+a < n){
						//cout<<"Running From row = "<<i<<" to "<<i+a<<" and column from "<<j<<" to "<<j+a<<"\n";
						for(b=i; b<i+a+1; b++){
							for(c=j; c<j+a+1; c++){
								sum += ary[b][c];
							}
						}
						double div = (a+1) * (a+1);
						temp = sum / div;
						//cout<<"avg = "<<temp<<"\n";
						if(temp >= k) count++;
						sum = 0.0;
				    }else{
						break;
					}
				 a++;
				}
			}
		}
		//cout<<"ans = "<<count<<"\n";
		cout<<count<<"\n";
	}
	return 0;
}
