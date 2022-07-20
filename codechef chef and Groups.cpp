#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	string str;
	cin>>t;
	while(t--){
		int count = 0;
		cin>>str;
		bool flag = true;
		for(int i=0; i<str.length(); i++){
			if(str[i] == '1' && flag){
				count++;
				flag = false;
			}else if(str[i] == '0'){
				flag = true;
			}
		} 
		cout<<count<<"\n";
	}
	return 0;
}
