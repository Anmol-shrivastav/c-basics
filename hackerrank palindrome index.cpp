#include<iostream>
using namespace std;

int isPalindrome(string str,int i,int n){
    while(i < n){
        if(str[i] != str[n]){
            if(str[i+1] == str[n]){
                return i;
            }
            else if(str[n-1] == str[i]){
                return n;
            } else {
                return -1;
            }
        }
        i++;
        n--;
    }
    return -1;
}
int main(){
    int t,ans;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int ans = isPalindrome(str,0,str.length()-1);
        cout<<ans<<"\n";
    }
    return 0;
}
