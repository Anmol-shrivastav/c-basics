#include<iostream>
#include<string>
using namespace std;

int myFun(string str,int i, int count){
    if(i == str.length()) return count;
    //string sub = str.substr(i,2);
    if(i + 2 < str.length()){
        if(str[i] != 'S') count++;
        if(str[i + 1] != 'O') count++;
        if(str[i + 2] != 'S') count++;
        i = i + 2;
    }
    return myFun(str,i+1,count);
}

int main(){
    string str;
    cin>>str;
    int ans = myFun(str,0,0);
    cout<<ans;
    return 0;
}

