#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int> &firstHalf, vector<int> &secondHalf){
	int i=0,j=0;
	vector<int> merged;
	while(i < firstHalf.size() && j < secondHalf.size()){
		if(firstHalf[i] < secondHalf[j]){
			merged.push_back(firstHalf[i]);
			i++;
		}else{
			merged.push_back(secondHalf[j]);
			j++;
		}	
	}
	
	while(i < firstHalf.size()){
		merged.push_back(firstHalf[i]);
		i++;
	}
	
	while(j < secondHalf.size()){
		merged.push_back(secondHalf[j]);
		j++;
		
	}
	return merged;
}

vector<int> mergeSort(vector<int> &ary, int si, int ei){
	if(si == ei){
		vector<int> base;
		base.push_back(ary[si]);
		return base;
	}
	
	int mid = (si + ei) / 2;
	
	vector<int> firstHalf = mergeSort(ary,si,mid);
	vector<int> secondHalf = mergeSort(ary,mid+1,ei);
	
	return mergeTwoSortedArray(firstHalf,secondHalf);
}

int main(){
	int n,temp;
	cin>>n;
	vector<int> ary;
	//Input
	for(int i=0; i<n; i++){
		cin>>temp;
		ary.push_back(temp);
	}
	//Merge Sort==============================
	ary = mergeSort(ary, 0, n-1);
	
	//Display
	for(int i=0; i<n; i++){
		cout<<ary[i]<<" ";
	}
	return 0;
}
