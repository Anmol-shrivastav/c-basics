#include<iostream>
using namespace std;
int main(){
	string str1,str2;
	cin>>str1>>str2;
	int ary[26] = {0};
	
	for(int i=0; i<str1.length(); i++){
		int idx = (int)(str1[i] - 'A');
		ary[idx]++;
	}
	
	for(int i=0; i<str2.length(); i++){
		int idx = (int)(str2[i] - 'A');
		ary[idx]--;
	}
	int i;
	for(i=0; i<26; i++){
		if(ary[i] > 0){
			break;
		}
	}
	
	if(i == 26){
		cout<<"True";
	}else{
		cout<<"False";
	}
	
	
	return 0;
}
