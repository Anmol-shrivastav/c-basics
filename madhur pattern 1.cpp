#include<iostream>
using namespace std;
int findStart(int i, int n){
	int start;
	if(i == 1){
		return start = 1;
	}else if(i == 2){
		return start = (n * 2) + 1;
	}else{
		return start = (n * (i+1)) + 1;
	}
}
int main(){
	int n;
	cin>>n;
	int half, start, temp;
	half = n % 2 == 0 ? (n+2/2) : (n+1) / 2;
	for(int i=1; i<=n; i++){
		//calculate start here
		if(i <= half){
			start = findStart(i, n);
		}else{
			if(i == n){
				start = n+1;	
			}
			else if(n % 2 == 0){
				temp = (half - (i-half))-1;
				start = findStart(temp, n);
			}else{
				temp = (half - (i-half));
				start = findStart(temp, n);
			}
		}
		
		if(i == 1 || i == n){
			for(int j=1; j<=n; j++){
				cout<<start<<"\t";
				start++;
			}
		}else{
			for(int j=1; j<=n; j++){
				if(j == 1 || j == n){
					cout<<start<<"\t";
				}else{
					cout<<"\t";
				}
				start++;
			}
		}
		
		cout<<"\n";
	}
	return 0;
}
