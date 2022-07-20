#include <iostream>
#include<string>
using namespace std;

void printSS(string ques, string ans){
    if(ques.length() == 0){
        cout<<ans<<"\n";
        return;
    }
    char ch = ques[0];
    string ros = ques.substr(1,ques.length()-2);
    printSS(ros,ans+ch);
    printSS(ros,ans+"");
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}
