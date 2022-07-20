#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long r,c,b;
	    cin>>r>>c>>b;
	     long long diff;
	    long long a[r][c];
	    long long x[r][c];
	      long long sum=0,sum1=0;
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>a[i][j];
	            sum+=a[i][j];
	            
	        }
	    }
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>x[i][j];
	            sum1+=x[i][j];
	        }
	    }
	    sum-=sum1;
	    for(int i=0;i<r;i++){
	    	for(int j=0;j<=c-b;j++){
	    		if(a[i][j]!=x[i][j]){
	    			int diff=a[i][j]-x[i][j];
	    			for(int k=0;k<b;k++){
	    				a[j][k]-=diff;
					}
				}
			}
		}
		
		for(int i=0;i<=r-b;i++){
	    	for(int j=0;j<c;j++){
	    		if(a[i][j]!=x[i][j]){
	    			int diff=a[i][j]-x[i][j];
	    			for(int k=0;k<b;k++){
	    				a[k][j]-=diff;
					}
				}
			}
		}
		int i,j;
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				if(a[i][j] != x[i][j]){
					break;
				}
			}
		}
		if(i == r && j == c){
			cout<<"Yes"<<"\n";
		}else{
			cout<<"No"<<"\n";
		}
	}
	return 0;
}
