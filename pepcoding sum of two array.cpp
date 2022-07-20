#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n1,n2,s1,s2,sum,rem,carry;
	cin>>n1;
	int ary1[n1];
	for(int i=0; i<n1; i++){
		cin>>ary1[i];
	}
	cin>>n2;
	int ary2[n2];
	for(int i=0; i<n2; i++){
		cin>>ary2[i];
	}
	vector<int> ans;
	s1 = n1 - 1;
	s2 = n2 - 1;
	while(s1>=0 && s2>=0){
		sum = ary1[s1] + ary2[s2];
		if(sum >= 10){
			if(s1-1 >= 0){
				rem = sum % 10;
				carry = sum / 10;
				ans.push_back(rem);
				ary1[s1 - 1] += carry;
			} else if(s2 - 1 >= 0){
				rem = sum % 10;
				carry = sum / 10;
				ans.push_back(rem);
				ary2[s2 - 1] += carry;
			} else {
				ans.push_back(sum);
			}+
		} else {
			ans.push_back(sum);
		}
		s1--;
		s2--;
	}
	while(s1 >= 0){
		ans.push_back(ary1[s1]);
		s1--;
	}
	while(s2 >= 0){
		ans.push_back(ary2[s2]);
		s2--;
	}
	//vector<int> :: iterator it;
	for(int i=ans.size()-1; i>=0; i--){
		cout<<ans[i]<<"\n";
	}
	//cout<<ans.size();
	return 0;
}
