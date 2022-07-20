#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string s) {
    cout<<s;
    string ans = "", num="", ros="";
    int i,j;
    for(i=0; i<s.length(); i++){
        if(s[i] >= '1' && s[i] <= '9'){
            num += s[i];
        }else{
            break;
        }
    }
    for(; i<s.length(); i++){
        ros += s[i];
    }
    j = num.length()-1;
    for(i=0; i<ros.length()-2; i++){
    	cout<<"first i = "<<i<<" ros.length = "<<ros.length()<<"\n";
        if((ros[i]>='A' && ros[i]<='Z') && (ros[i+1]>='a' && ros[i+1]<='z') && ros[i+2] == '*'){
            ans += ros[i+1];
            ans += ros[i];
            i += 2;
        }else if(ros[i]=='0'){
            ans += num[j];
            j--;
        }else{
            ans += ros[i];
        }
    }
    cout<<"i = "<<i<<" ros.length = "<<ros.length()<<"\n";
    while(i<ros.length()){
        if(ros[i] == '0'){
            ans += num[j];
            j--;
        }else{
            ans += ros[i];
        }
        i++;
    }
    
    //cout<<num<<"\n"<<ros;
    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    cout << result << "\n";

    return 0;
}

