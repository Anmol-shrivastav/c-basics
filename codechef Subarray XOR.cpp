#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;


void printVector(vector<string> &ary){
	for(int i=0; i<ary.size(); i++){
		cout<<ary[i]<<" ";
	}
	cout<<"\n";
}

void printVectorInt(vector<int> &ary){
	for(int i=0; i<ary.size(); i++){
		cout<<ary[i]<<" ";
	}
	cout<<"\n";
}

vector<string> getSubStrings(string str){
	vector<string> ansAry;
	for (int i = 0; i < str.length(); i++) {
        string subStr;
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            string ans = subStr;
            ansAry.push_back(ans);
//            cout << subStr << endl;
        }
    }
    
    return ansAry;
}

int convert(string str){
	int p = 0, ans = 0;
	for(int i=str.length()-1; i>=0; i--){
		ans = ans + ((int)(str[i] - '0') * (int)pow(2, p));
		p++;
	}
	return ans;
}
 
vector<int> convertToDecimal(vector<string> &substr){
	vector<int> ans;
	for(int i=0; i<substr.size(); i++){
		int converted = convert(substr[i]);
		ans.push_back(converted);
	}
	return ans;
}

void solve(){
	int  n;
	cin>>n;
	string str;
	cin>>str;
	
	vector<string> substr = getSubStrings(str);
	
	//printVector(substr);
	
	vector<int> decimalNum = convertToDecimal(substr);
	
	//printVectorInt(decimalNum);
	
	ll ans = decimalNum[0];
	for(int i=1; i<decimalNum.size(); i++){
		ans = ans xor decimalNum[i];
		ans %= 998244353;
	}
	
	cout<<ans<<"\n";
}

int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
