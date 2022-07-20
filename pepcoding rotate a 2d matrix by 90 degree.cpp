#include<iostream>
using namespace std;
int  main(){
	int n,i,j,start,end;
	cin>>n;
	int ary[n][n];
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		    cin>>ary[i][j];
	
	//Transpose
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			swap(ary[i][j],ary[j][i]);
		}
	}
	
	//Reverse each column
	for(i=0; i<n; i++){
		start = 0; 
		end = n-1;
		while(start < end){
			swap(ary[i][start],ary[i][end]);
			start++;
			end--;
		}
	}
	
	//display
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout<<ary[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
