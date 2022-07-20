//hackerrank 13
#include<iostream>
#include<utility>
#include<map>
using namespace std;
int main()
{
	int i,j,n,count=1;
	cin>>n;
	int ary[n];
	for(i=0; i<n; i++)
	{
		cin>>ary[i];
	}
	map <int, int> bird;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(ary[i]==ary[j+1])
			{
				int key = ary[i];
				count++;
				bird[key] = count;
			}
		}
		count = 0;
	}
	map<int, int>::iterator obj = bird.begin();
	while(obj != bird.end())
	{
		cout<<obj->first<<" "<<obj->second<<"\n";
		obj++;
	}
	return 0;
}
