#include<iostream>
using namespace std;

 bool isPalindrome(string s) {
    string str = "";
    int n = s.length();
    for(int i=0; i<n; i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            str += s[i];
        }
        cout<<"i -> "<<s[i]<<" -> "<<str<<"\n";
    }
    n = str.length();
    int i=0, j=n-1;
    cout<<str<<"\n";
    while(i < j){
        if(str[i]>='A' && str[i]<='Z') str[i] = str[i] - 'A' + 'a';
        if(str[j]>='A' && str[j]<='Z') str[j] = str[j] - 'A' + 'a';
        if(str[i] != str[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
	string s;
	getline(cin,s);
	cout<<isPalindrome(s);
	return 0;
}
