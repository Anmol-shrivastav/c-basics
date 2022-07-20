//hackerrank using mapping
#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,i,temp,value,index=1;
	map <int, int> bird;
	bird[0] = 0,bird[1] = 0,bird[2] = 0,bird[3] = 0,bird[4] = 0,bird[5] = 0;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>temp;
		bird[temp]++;
	}
	value = bird[1];
	for(i=2; i<6; i++)
	{
		if(value < bird[i])
		{
			value = bird[i];
			index = i;
		}
	}
	cout<<index;
	return 0;
	
}
