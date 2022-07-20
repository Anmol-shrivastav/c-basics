#include<iostream>
#include<map>
using namespace std;
int main()
{
	int i,area,length=0;
    string str;
    char index='a';
    map <char,int> input;
    for(i=0; i<26; i++)
       {
           cin>>input[index];
           index++;
	   }
	cin>>str;
	
	for(i=0; i<str.size(); i++)
	{
		int temp = str[i];
		if(input[temp]>length)
		    length = input[temp];
	}
	
	cout<<length*str.size();
      
    return 0;
}
