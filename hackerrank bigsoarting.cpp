#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool mysorting(string a,string b) {
	if(a.length() == b.length()) {
		return a<b;
	}
	return a.length() < b.length();
}

int main()
{
	int n,i,j,ci;
	string temp;
	cin>>n;
	vector<string> ary;
	for(i=0; i<n; i++)
	{
		cin>>temp;
		ary.push_back(temp);
	}
	//cin>>ary[i];
	sort(ary.begin(),ary.end(), mysorting);
   /* for(i=0; i<n-1; i++)
	{
	    ci = i;
		for(j=i+1; j<n; j++)
		{
			if(ary[ci].length()>ary[j].length())
			{
				ci = j;
			}
			else if(ary[ci].length()==ary[j].length())
			{
				if(ary[ci]>ary[j])
				ci = j;
			}
		}
		swap(ary[ci], ary[i]);
	}*/
	for(i=0; i<n; i++)
	cout<<ary[i]<<"\n"; 
	return 0;
}
