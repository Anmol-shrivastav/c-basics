#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t,k,n,temp;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int ary[n];
		int sum = k;
		int count = 0;
		vector<int> s;
		vector<int> ans;
		for(int i=0; i<n; i++){
			cin>>ary[i];
			s.push_back(ary[i]);
		}
		sort(s.begin(),s.end());
		int j=0;
		for(int i=s.size()-1; sum<=n; i--){
			sum += s[i];
			count++;
			for(j=0; j<n; j++){
				if(ary[j] == s[i]){
					ans.push_back(j);
					ary[j] = -1;
					break;
				}
			}
		}
		sort(ans.begin(),ans.end());
		cout<<count<<"\n";
		for(int i=0; i<ans.size(); i++){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
