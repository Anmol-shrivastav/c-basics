#include<iostream>
#include<map>
using namespace std;

int isValidNumber(int n){
	if(n <= 10) return 1;
	map<int,int> fre;
	while(n != 0){
		int digit = n % 10;
		n = n / 10;
		fre[digit]++;
	}
	
	map<int,int> :: iterator it;
	for(it = fre.begin(); it!=fre.end(); it++){
		if(it->second != 1){
			return 0;
		}
	}
	
	return 1;
}

int main(){
	int n1,n2,count = 0;
	cin>>n1>>n2;
	for(int i=n1; i<=n2; i++){
		count += isValidNumber(i);
	}
	cout<<count;
	return 0;
}
