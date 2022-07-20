#include<iostream>
#include<unordered_map>
#include<limits>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	while(t--){
		
		int n;
		unordered_map<char, int> map1;
		cin>>n;
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		char ary[n];
		char ch;
		for(int i=0; i<n; i++){
			cin>>ary[i];
			map1[ary[i]]++;
		}
		
//		for(int i=0; i<n; i++)    cout<<ary[i]<<" ";
//		cout<<"\n";
//		
		string ans = "There is no odd ans";
		
		unordered_map<char, int>::iterator it;
		for(int i=0; i<n; i++){
			it = map1.find(ary[i]);
			//cout<<it->first<<" "<<it->second<<"\n";
			if(it->second % 2 == 1){
				ans = "";
				ans += it->first;
				break;
			}
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}
