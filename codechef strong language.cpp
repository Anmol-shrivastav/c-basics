#include<iostream>
#include<ios>
#include<limits>
using namespace std;
// 3
// 5 2
// *a*b*
// 5 2
// *a**b
// 5 1
// abcde
string getMyAns(int n, int k, string str){
	int temp = 0 , j;
	for(int i=0; i<n; i++){
		if(str[i] == '*'){
			temp++;
			j=i+1;
			while(j < n) {
				if(str[j] == '*') 
				    temp++;
				else 
				    break;
				j++;
			}
			i=j;
			if(temp >= k) return "Yes";
			temp = 0;
		}
	}
	return "No";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
	while(t--){
		int n,k;
		cin>>n>>k;
		cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
		string str;
		cin>>str;
		string ans = getMyAns(n,k,str);
		cout<<ans<<"\n";
	}
	return 0;
}
