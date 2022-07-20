#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int searchMap(string str,map<string,int> &mylist){
	map<string,int> :: iterator p;
	for(p=mylist.begin(); p!=mylist.end(); p++){
		if(p->first == str){
			return 1;
		}
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n;
	string temp,str1,str2;
	cin>>t;
	while(t--){
		cin>>n;
		int count = 0;
		vector<string> ary;
//		vector<string> :: iterator it;
//		vector<string> :: iterator ip;
		map<string,int> mylist;
		for(int i=0; i<n; i++){
			cin>>temp;
			ary.push_back(temp);
			mylist[temp]++;
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				str1 = ary[i];
				str2 = ary[j];
				if(str1[0] != str2[0]){
					swap(str1[0],str2[0]);
				    int it = searchMap(str1,mylist);
				    int ip = searchMap(str2,mylist);
				    if(it == -1 && ip == -1){
					    count += 2;
				    }
				} 
				
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
