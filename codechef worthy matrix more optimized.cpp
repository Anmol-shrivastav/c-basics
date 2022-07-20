#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll t,m,n,k,a,count,i,j,b,c,col,row,rowidx,colidx,flag;
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
		a=1;
		while(a <= min(m,n)){
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
					if(a + i < m && a + j < n){
						for(b=i; b<i+a+1; b++){
							for(c=j; c<j+a+1; c++){
								sum += ary[b][c];
							}
						}
						div = (a+1) * (a+1);
						temp = sum / div;
						if(temp >= k){
							flag = 1;
						    count++;
						    for(rowidx = i; rowidx<m; rowidx++){
						    	for(colidx = j + 1; colidx<n; colidx++){
						    		if(a + colidx < n && a + rowidx < m) count++; else break;
								}
							}	
						}
						sum = 0.0; 	
					}else{
					    break;
					}
					if(flag == 1) break;
				}
				if(flag == 1){
					flag = 0;
					break;
				}
			}
			a++;
		}
		//cout<<"ans = "<<count<<"\n";
		cout<<count<<"\n";
	}
	return 0;
}
