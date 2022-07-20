#include<iostream>
using namespace std;
int main(){
	int n,i,j,half;
	cin>>n;
	half = (n+1)/2;
	for(i=1; i<=n; i++){
		if(i <= half){
			if(i == half) for(j=1; j<=n; j++) cout<<"*"<<"\t";
			else if(i == 1){
				for(j=1; j<=n; j++){
					if(j <= half || j == n){
						cout<<"*"<<"\t";
					}else{
						cout<<"\t";
					}
				}
			}
			else{
				for(j=1; j<=n; j++){
					if(j == half || j == n)
					    cout<<"*"<<"\t";
					else
					    cout<<"\t";
				}
			}
		}else{
			if(i == n){
				for(j=1; j<=n; j++){
					if(j == 1 || j >= half){
						cout<<"*"<<"\t";
					}else{
					    cout<<"\t";
					}
				}
			}
			else{
				for(j=1; j<=n; j++){
					if(j == 1 || j == half){
						cout<<"*"<<"\t";
					}
					else
					    cout<<"\t";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
