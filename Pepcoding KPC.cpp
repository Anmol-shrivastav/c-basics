#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
    // write your code here
    if(ques.length() == 0){
        cout<<asf<<"\n";
        return;
    }
    char ch = ques[0];
    string ros = ques.substr(1,ques.length()-1);
    string options = codes[ch - '0'];
    for(int i=0; i<options.length(); i++){
        printKPC(ros,asf+options[i]);
    }
}

int main(){
    string str;
    cin >> str;
    printKPC(str,"");
    return 0;
}
