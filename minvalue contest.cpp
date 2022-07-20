#include<iostream>
#include<vector>
using namespace std;
long long int findMin(vector<int>& ary,long long int i, long long int j){
	long long int min = INT_MAX;
	while(i<=j){
		if(min > ary[i]){
			min = ary[i];
		}
	} 
	return min;
}
int main(){
	vector<int> ary = {3,1,6,4,5,2};
	for(int i=0; i<ary.size()-1; i++){
		for(int j=i+1; j<ary.size(); j++){
			long long int minval = findMin(ary,i,j);
		}
	}
	return 0;
}
