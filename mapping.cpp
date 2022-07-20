#include<iostream>
#include<map>
using namespace std;

int main(){
	int n,temp;
	map<int,int> ary;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		ary[temp]++;
	}
	
	map<int,int>::iterator it;
	for(it=ary.begin(); it!=ary.end(); it++){
		cout<<"index = "<<it->first<<" Value = "<<it->second<<"\n";
	}
	return 0;
}
