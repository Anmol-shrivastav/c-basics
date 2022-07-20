#include<iostream>
#include<algorithm>
using namespace std;

bool is_ArrayEqual(int n, int ary1[], int m, int ary2[]){
	for(int i=0; i<min(n,m); i++){
		if(ary1[i] != ary2[i]){
			return false;
		}
	}
	return true;
}

bool is_JonWin(int n, int ary1[], int m, int ary2[]){
	int jonSum=0,jackSum=0;
	for(int i=0; i<n; i++){
		jonSum = jonSum + ary1[i];
	}
	for(int i=0; i<m; i++){
		jackSum = jackSum + ary2[i];
	}
	if(jonSum > jackSum){
		return true;
	} else {
		return false;
	}
}


int check(int n, int ary1[], int m, int ary2[], int swaps, int first, int second){
	if(swaps > min(n,m)){
		return -1;
	}
	if(is_JonWin(n,ary1,m,ary2)){
		return swaps;
	} else {
		int idx1 = first;
		int idx2 = second;
		swap(ary1[idx1], ary2[idx2]);
		swaps++;
		first++;
		second--;
		int ans = check(n,ary1,m,ary2,swaps,first,second);
		return ans;
	}
}

int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int ary1[n], ary2[m];
		for(int i=0; i<n; i++)
		    cin>>ary1[i];
		for(int i=0; i<m; i++)
		    cin>>ary2[i];
		//Sort ary1
		int k = sizeof(ary1) / sizeof(ary1[0]);
		sort(ary1, ary1+k);
		//sort ary2
		k = sizeof(ary2) / sizeof(ary2[0]);
		sort(ary2, ary2+k);
		
	    if(is_ArrayEqual(n,ary1,m,ary2) && n == m){
	    	cout<<-1<<"\n";
		} else {
			int ans = check(n,ary1,m,ary2,0,0,m-1);
		    cout<<ans<<"\n";
		}
		
	}
	return 0;
}
