#include<iostream>
#include<string>
using namespace std;

void printSS(string str,string ans){
    if(str.length() == 0){
        cout<<ans<<"\n";
        return;
    }
    char ch = str[0];
    string ros = str.substr(1,str.length()-1);
    printSS(ros,ans + "");
    printSS(ros,ans + ch);
    int temp = ch;
    string ascii = to_string(temp);
    printSS(ros,ans + ascii);
}

int main(){
    string str;
    cin>>str;
    printSS(str,"");
    return 0;
}
