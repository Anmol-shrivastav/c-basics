#include<iostream>
#define ll long long
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
	ll t,m,n,k,a,count,i,j,b,c,col,row;
	double temp,sum=0.0,div;
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
				while(a+i < m && a+j < n){
					if(a == 1){
						//cout<<"Running From row = "<<i<<" to "<<i+a<<" and column from "<<j<<" to "<<j+a<<"\n";
						for(b=i; b<i+a+1; b++){
							for(c=j; c<j+a+1; c++){
								sum += ary[b][c];
							}
						}
						div = (a+1) * (a+1);
						temp = sum / div;
						if(temp >= k)  count++;
					}else{
					    for(col=j; col<c+1; col++)
					        sum += ary[b][col];
					    for(row=i; row<b; row++)
					        sum += ary[row][c];
					    c++;
					    b++;
					    div = (a+1) * (a+1);
						temp = sum / div;
						if(temp >= k)  count++;
					}
					a++;
				}
				sum = 0.0;
			}
		}
		//cout<<"ans = "<<count<<"\n";
		cout<<count<<"\n";
	}
	return 0;
}
