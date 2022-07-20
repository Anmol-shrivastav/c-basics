#include<iostream>
#define ll long long
using namespace std;

ll getMyAns(){
	ll m,n,k,a,count,i,j,b,c,col,row,minval,p;
	double temp,sum=0.0,div;
	cin>>m>>n>>k;
		count = 0;
		double ary[m+1][n+1];
		for(i=0; i<=m; i++){
			for(j=0; j<=n; j++){
				if(i==0 || j==0) ary[i][j] = 0;
				else    cin>>ary[i][j];	
			}
		}
		for(i=0; i<=m; i++){
			temp = 0;
			for(j=0; j<=n; j++){
				ary[i][j] += temp;
				temp = ary[i][j];
			}
		}
		for(i=0; i<=n; i++){
			temp = 0;
			for(j=0; j<=m; j++){
				ary[j][i] += temp;
				temp = ary[j][i];
			}
		}
		minval = min(m,n);
		for(ll u=1; u<=minval; u++){
			for(i=u; i<=m; i++){
				for(j=u; j<=n; j++){
					if((ary[i][j]+ary[i-u][j-u]-ary[i][j-u]-ary[i-u][j])/(u*u) >= k)    count++;
					
				}
			}
		}
		return count;
		//cout<<count<<"\n";
//		for(i=0; i<m; i++){
//			for(j=0; j<n; j++){
//				a = 1;
//				while(a+i < m && a+j < n){
//					if(a == 1){
						//cout<<"Running From row = "<<i<<" to "<<i+a<<" and column from "<<j<<" to "<<j+a<<"\n";
//						for(b=i; b<i+a+1; b++){
//							for(c=j; c<j+a+1; c++){
//								sum += ary[b][c];
//							}
//						}
//						div = (a+1) * (a+1);
//						temp = sum / div;
//						if(temp >= k){
//							count++;
//							a++;
//							while(a+i<m && a+j<n){
//								count++;
//								a++;
//							}
							//for(; i<m; i++){
//							for(j=j+1; j<n; j++){
//								a = 1;
//								while(a + i < m && a + j < n){
//									count++;
//									a++;
//								}
//							}
//							for(i=i+1; i<m; i++){
//								for(j=0; j<n; j++){
//									a = 1;
//									while(a + i < m && a + j < n){
//										count++;
//									    a++;
//									}
//								}
//							}
							//}
//							return count;
//						}  
//					}else{
//					    for(col=j; col<c+1; col++)
//					        sum += ary[b][col];
//					    for(row=i; row<b; row++)
//					        sum += ary[row][c];
//					    c++;
//					    div = (a+1) * (a+1);
//					    b++;
//						temp = sum / div;
//						if(temp >= k){
//							count++;
//							a++;
//							while(a+i<m && a+j<n){
//								count++;
//								a++;
//							}
//							for(j=j+1; j<n; j++){
//								a = 1;
//								while(a + i < m && a + j < n){
//									count++;
//									a++;
//								}
//							}
//							for(i=i+1; i<m; i++){
//								for(j=0; j<n; j++){
//									a = 1;
//									while(a + i < m && a + j < n){
//										count++;
//									    a++;
//									}
//								}
//							}
							//}
//							return count;
//						}  
//					}
//					a++;
//				}
//				sum = 0.0;
//			}
//		}
//		//cout<<"ans = "<<count<<"\n";
//		return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t,ans;
	cin>>t;
	while(t--){
		ans = getMyAns();
		cout<<ans<<"\n";
	}
	return 0;
}
