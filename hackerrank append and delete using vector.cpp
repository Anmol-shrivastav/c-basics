#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i,n,count=0,turn=0,unequal;
	string s1,s2;
	cin>>s1>>s2>>n;
	for(i=0; i<s2.size(),i<s1.size(); i++)
	   {
	   	  if(s2[i] != s1[i] && s1.size() != s2.size())
	   	   {
	   	  	   count++;
	   	  	   unequal = i;
	   	  	   break;
		   }
	   }
	if(count == 0)
	cout<<"YES";
	else
	{
		vector<int> check1;
		vector<int> check2;
		for(i=0; i<s1.size(); i++)
		   check1.push_back(s1[i]);
		for(i=0; i<s2.size(); i++)
		   check2.push_back(s2[i]);
		vector<int>::iterator it;
		i=s1.size()-1;
		for(it=check1.end(); i>=unequal; i--,it--)
		{
			check1.erase(it);
			turn++;
		}
		for(i=check1.size(); i<check2.size(); i++)
		{
			turn++;
			check1.push_back(check2[i]);
		}
		if(turn<=n)
		  cout<<"YES";
		else
		  cout<<"NO";
	}
	return 0;
	
}
