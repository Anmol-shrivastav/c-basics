#include<iostream>
using namespace std;

int binarySearch(int ary[],int n,int data){
	int i = 0;
	int j = n - 1;
	while(i <= j){
		int mid = (i + j) / 2;
		if(ary[mid] > data){
			j = mid - 1;
		} else if(ary[mid] < data){
			i = mid + 1;
		} else {
			return mid;
		}
	}
	return -1; //if data is not found in the array
}

int main(){
	int ary[] = {10,20,30,40,50,60,70,80,90,100}; //array must be sorted
	int n = sizeof(ary) / sizeof(ary[0]);
	int data = 70;
	int ans = binarySearch(ary,n,data);
	if(ans != -1){
		cout<<"Found at index "<<ans<<"\n";
	} else {
		cout<<"Not Found";
	}
	return 0;
}
