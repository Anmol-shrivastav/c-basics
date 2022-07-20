#include<iostream>
using namespace std;
int main(){
	int i,j,half,n,temp;
	cin>>n;
	half = (n+1)/2;
	for(i=1; i<=n; i++){
		if(i>half){
			int diff = i - half;
			temp = half - diff;
		}
		if(i==1 || i==n){
			for(j=1; j<n; j++){
				cout<<"*"<<"\t";
			}
		}
		else if(i<=half){
			for(j=1; j<=n; j++){
				if(j==i || j==n-i+1){
					cout<<"*"<<"\t";
				} else {
					cout<<"\t";
				}
			}
		}
		else if(i>half){
			for(j=1; j<n; j++){
				if(j==temp){
					for(; j<=n-temp+1; j++){
						cout<<"*"<<"\t";
					}
					break;
				}
			}
		}
	}
	return 0;
}
