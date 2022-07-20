#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,i,temp,count=0;
	cin>>n;
	int ary[n];
	map <int,int> pair;
	for(i=0; i<n; i++)
	{
		cin>>ary[i];
		temp=ary[i];
		pair[temp];
	}
	for(i=0; i<n; i++)
	{
		temp = ary[i];
		pair[temp]++;
	}
	map<int,int>::iterator obj = pair.begin();
	while(obj != pair.end())
	{
		if(obj->second%2==0)
		{
			count = count + (obj->second/2);
		}
		else if(obj->second-1 != 0 && (obj->second-1)%2==0)
		{
			count = count + (obj->second-1)/2;
		}
		obj++;
	}
	cout<<count;
	return 0;
}
