#include<iostream>
using namespace std;
int main(){
	int n,h,x,temp,total;
	string ans = "NO";
	cin>>n>>h>>x;
	for(int i=0; i<n; i++){
		cin>>temp;
		if(temp+x>=h){
			ans = "YES";
			break;
		}
	}
	cout<<ans;
	return 0;
}
