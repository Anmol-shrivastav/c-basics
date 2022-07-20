#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n1,n2,p1,p2,diff;
	vector<int> ans;
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
	p2 = n2 - 1;  // second array
	p1 = n1 - 1; // first array
	while(p1>=0 && p2>=0){
		if(ary2[p2] < ary1[p1]) {
			ary2[p2 - 1] -= 1;
			ary2[p2] += 10;
		}
		diff = ary2[p2] - ary1[p1];
		ans.push_back(diff);
		p1--;
		p2--;
	}
	while(p2>=0){
		ans.push_back(ary2[p2]);
		p2--;
	}
	int j=ans.size()-1;
	for(; j>=0; j--){
		if(ans[j] != 0){
			break;
		}
	}
	for(int i=j; i>=0; i--){
		cout<<ans[i]<<"\n";
	}
	return 0;
}
