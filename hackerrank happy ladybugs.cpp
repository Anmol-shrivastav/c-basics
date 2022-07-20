#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
	int t,n,i,index=0,underscore=0;
	string result = "NO";
	cin>>t;
	while(t--)
	{
		cin>>n;
		char ary[n],temp;
		map<char, int> str;
		for(i=0; i<n; i++)
		{
			cin>>temp;
			if(temp=='_')
			underscore++;
			else  {
				ary[index++] = temp;
			    str[temp]++;
			}	
		}
	    if(n==underscore)
	    result = "YES";
	    else 
	    { 
	        map<char, int> :: iterator it = str.begin();
		    while(it != str.end())
		    {
			    if(it->second < 2)
			    break;
			    it++;	
		   }
		   if(it == str.end())
		   {
			   for(i=0; i<index-1; i++)
	    	   {
	    		   if(ary[i]!=ary[i+1])
	    		       if(ary[i+1]!=ary[i+2])
	    		       break;
			   }
			   if(i==index-1)
			   result = "YES";
			   else if(underscore > 0)
			   result = "YES";
	       }
	   }
	   cout<<result<<"\n";
	   result = "NO";
	   underscore = index = 0;
	   str.clear();
	}
	return 0;
}
