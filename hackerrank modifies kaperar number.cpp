#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int s,e,i,j,count=0,square,k;
	string str,str1,str3,str4;
	//cin>>s>>e;
	//for(i=s; i<=e; i++)
	//{
	    i=55;
		stringstream ss;
		ss<<i;
		ss>>str;
		square = i*i;
		stringstream aa;
		aa<<square;
		aa>>str1;
		//cout<<str<<" "<<str1<<"\n";
		for(j=str1.size()-str.size(),k=0; j<str1.size(); j++,k++)
			str4[k] = str1[j];
		if(str1.size()-str.size()==0)
		   str3="0";
		else
		for(j=0; j<str1.size()-str.size(); j++)
		    str3[j] = str1[j];
		cout<<str3<<" "<<str4<<"\n";
		
    //}
	return 0;
}
