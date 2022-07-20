#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

//Simple map = it will sort the map on the basis of key where key is map<key, value>
void mapFunction(){
	map<int,int> map1;
	int n, temp;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		map1[temp]++;
	}
	
	//Print map=========
	map<int,int> :: iterator it;
	for(it=map1.begin(); it!=map1.end(); it++){
		cout<<it->first<<" "<<it->second<<"\n";
	}
}

void unorderedMapFunction(){
	unordered_map<int, int> map1;
	int n, temp;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		map1[temp]++;
	}
	
	//cout<<map1[3]<<"\n";
	
	//Print map=========
	//map1<int,int> :: iterator it;
	for(auto it : map1){
		cout<<it.first<<" "<<it.second<<"\n";
	}
}

int main(){
	//mapFunction();
	unorderedMapFunction();
	return 0;
}
