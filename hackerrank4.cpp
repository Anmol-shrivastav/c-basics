//hackerrank time conversion 
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	int i,j,k,h1,h2;
	string str;
	cin>>str;
	h1 = (int)str[0]-'0';
	h2 = (int)str[1]-'0';
	int hh = h1*10+h2;
	
	if(str[8] == 'A')
    {
    	if(hh == 12)
    	{
    		cout<<"00";
    		for(i=2; i<8; i++)
    		{
    			cout<<str[i];
			}
		}
		else if(hh != 12 && hh < 12)
		{
			for(i=0; i<8; i++)
			{
				cout<<str[i];
			}
		}  
    }
	else if(str[8] == 'P')
	{
	    if(hh == 12)
	    {
	    	for(i=0; i<8; i++)
	    	{
	    		cout<<str[i];
			}
		}
		else if(hh != 12 && hh < 12)
		{
			cout<<hh+12;
			for(i=2; i<8; i++)
			{
				cout<<str[i];
			}
		}
	}
	return 0;
	
}
