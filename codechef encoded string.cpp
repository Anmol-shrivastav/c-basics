#include<iostream>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int convertDecimal(int n){
	int res=0,p=0;
    while(n != 0)
    {
        int rem = n % 10;
        res = res + (rem * pow(2, p));
        n = n/10;
        p++;
    }
    return res;
}

int main()
{
    char ary[16] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    string str;
    int n,t,i,bin;
    cin>>t;
    while(t--){
    	cin>>n>>str;
    	for(i=0; i+3 < str.length(); i++){
    		string temp = str.substr(i,4);
    		i = i+3;
    		stringstream s(temp);
    		s<<temp;
    		s>>bin;
    		int idx = convertDecimal(bin);
    		cout<<ary[idx];
		}
		cout<<"\n";
	}
	return 0;
}
