#include<bits/stdc++.h>

using namespace std;

string reduceString(string str) {
    for(int i=0; i<str.length(); i++) {
        if(str[i] == str[i+1]) {
            str.erase(i,2);
            i=-1;
        }
    }
    if(str.length() == 0) return "Empty String";
    else return str;
}

int main() {
    string str;
    cin>>str;
    cout<<reduceString(str);
    return 0;
}

