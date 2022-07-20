//mapping in c++
#include<iostream>
#include<conio.h>
#include<map>
#include<utility>
using namespace std;
int main()
{
	int n;
	long num;
	string name;
	cin>>n;
	cin.ignore();
	map <string, long> record;
	for(int i=0; i<n; i++)
	{
		cin>>name;
		cin>>num;
		record[name] = num;
	}
	map <string, long>::iterator obj = record.begin();
	while(obj != record.end())
	{
		cout<<obj->first<<" "<<obj->second<<"\n";
		obj++;
	}
	while(cin>>name)
	{
		if(record.find(name) != record.end())
		{
			cout<<name<<" "<<record.find(name)->second<<"\n";
		}
		else
		{
			cout<<"Not found"<<"\n";
		}
	}
	return 0;
}
