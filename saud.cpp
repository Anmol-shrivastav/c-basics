#include<iostream>
#include<map>
using namespace std;
int main(){
	int n, temp, n1,n2;
	map<int, int> map1;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		map1[temp]++;
	}
	
	map<int, int>::iterator it;
	int min = 1e9; int max = -1e9;
	for(it = map1.begin(); it!=map1.end(); it++){
		if(it->second > max){
			max = it->second;
			n2 = it->first;
		}
		if(it->second < min){
			min = it->second;
			n1 = it->first;
		}
	}
	//cout<<n1<<"\n"<<n2<<"\n";
	cout<<abs(n2 - n1);
	return 0;
}
