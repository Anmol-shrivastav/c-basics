#include<iostream>
#include<vector>

int countDuplicate(vector<int>& numbers){
	int ary[1001] = {0};
	
	for(int i=0; i<numbers.size(); i++){
		ary[numbers[i]]++;
	}
	
	int count = 0;
	
	for(int i=0; i<1001; i++){
		if(ary[i] > 1){
			count++;
		}
	}
	
	return count;
}

int main(){
	vector<int> v = {1,3,3,4,4,4};
	int ans = countDuplicate(v);
	cout<<ans;
	return 0;
}

