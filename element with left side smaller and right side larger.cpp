#include<iostream>
using namespace std;

int findElement(int ary[], int n) {
    int lar = INT_MIN, ans = -1;
    for(int i=0; i<n; i++){
        if(ary[i] >= lar){
            lar = ary[i];
            if(ans == -1 && i+1 != n && i != 0)
                ans = lar;
        }
        
        if(ary[i] < ans){
            ans = -1;
        }
    }
    return ans;
}

int main(){
	int n;
	cin>>n;
	int ary[n];
	for(int i=0; i<n; i++){
		cin>>n;
	}
	int ans = findElement(ary, n);
	cout<<ans;
	return 0;
}
