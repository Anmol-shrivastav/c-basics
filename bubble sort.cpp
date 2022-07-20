#include<iostream>
using namespace std;
int main(){
	int n,i,j,ci;
	cin>>n;
	int ary[n];
	//Input
	for(i=0; i<n; i++)
		cin>>ary[i];
		
	//Selection Sort	
	for(i=0; i<n-1; i++){
		ci = i;
		for(j=i+1; j<n; j++){
			if(ary[ci] > ary[j])
				ci = j;
		}
		swap(ary[i],ary[ci]);
	}
	
	//Display
	for(i=0; i<n; i++){
		cout<<ary[i]<<" ";
	}
	return 0;
}
