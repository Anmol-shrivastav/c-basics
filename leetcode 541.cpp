#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

string removeString2(string str, int k) {
        if(str.length()<k) {
            int start = 0;
            int end = str.length()-1;
            while(start < end) {
                swap(str[start++],str[end--]);
            }
        } else {
            for(int i=0; i<str.length(); i++) {
    	        if(i%(2*k) == 0) {
                    int start = i;
    		        int end = i+k-1;
                    if(end >= str.length())
                        end = str.length()-1;
    		        while(start < end) {
        	            swap(str[start],str[end]);
        	            start++;
        	            end--;
		           }
		           i = i + k;
		       }
           }
        }
        return str;
    }
int main() {
	int k;
	string str,ans;
	cin>>str>>k;
	if(k == 0 || str.length() == 1) {
		ans = str;
	}  else {
		ans = removeString2(str, k);
	}
	cout<<ans;
    return 0;
}
