#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string remHi(string str,int i,int n,string newstr,int count){
    if(i > n){
        newstr+=count;
        return newstr;
    } 
    if(str[i] == 'h' && str[i+1] == 'i'){
        count++;
        i = i+1;
    } else {
        newstr+=str[i];
    }
    return remHi(str,i+1,n,newstr,count);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str,ans;
    int n;
    cin>>str>>n;
    ans = remHi(str,0,str.length()-1,"",0);
    cout<<ans[ans.length()-1]<<"\n"<<ans[n]<<"\n"<<ans;
    return 0;
}

