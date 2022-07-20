#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	if(a < 0 && b < 0)
		return (a*-1)<(b*-1);
	if(a < 0)
		return (a*-1)<b;
	if(b < 0)
		return a < (b*-1);
	return a<b;
}

int main(){
	int n,temp;
	cin>>n;
	vector<int> ary;
	for(int i=0; i<n; i++){
		cin>>temp;
		ary.push_back(temp);
	}
	sort(ary.begin(), ary.end(), compare);
	for(int i=0; i<n; i++){
		cout<<ary[i]<<" ";
	}
	return 0;
}
