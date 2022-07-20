#include<iostream>
#include<map>
using namespace std;

int maxEquals = 0, minOp = 0;

//void printArray(int ary[], int n){
//	for(int i=0; i<n; i++){
//		cout<<ary[i] <<" ";
//	}
//	cout<<"\n";
//}

int countEquals(int ary[], int n){
	map<int,int> mymap;
	for(int i=0; i<n; i++){
		mymap[ary[i]]++;
	}
	
	map<int,int> :: iterator itr;
	int count = 0;
	for(itr = mymap.begin(); itr!=mymap.end(); itr++){
		if(itr->second > count){
			count = itr->second;
		}
	}
	return count;
}

void doXor(int idx, int op,  int x, int n, int ary[]){
	if(idx == n){
		int currEquals = countEquals(ary,n);
		if(currEquals > maxEquals){
			maxEquals = currEquals;
			minOp = op;
//			printArray(ary,n);
		}else if(currEquals == maxEquals && op < minOp){
			minOp = op;
		}
		return;
	}
	
	int temp = ary[idx];
	ary[idx] = ary[idx] xor x;
	
	doXor(idx + 1, op + 1,  x, n, ary);
	
	ary[idx] = temp;
	
	doXor(idx + 1, op,  x, n, ary);
	
}

int main(){
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		int ary[n];
		for(int i=0; i<n; i++){
			cin>>ary[i];
		}
		
		doXor(0, 0, x, n, ary);
		
		cout<<maxEquals<<"\n"<<minOp<<"\n";
		
		maxEquals = minOp = 0;
		
	}
	return 0;
}
