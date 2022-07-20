#include<iostream>
using namespace std;

int fibanocci(int n){
	if(n <= 1)
		return n;
	return fibanocci(n-1) + fibanocci(n-2);
}

int main(){
	int n;
	cin>>n;
	int ans = fibanocci(n);
	cout<<"Ans = "<<ans<<"\n";
	return 0;
}
