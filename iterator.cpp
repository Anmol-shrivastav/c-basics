#include<iostream>
#include<iterator>
#include<map>                //1 1 0 2 3 5 2 5 5 8 2
using namespace std;
int main()
{
    int i,n,temp;
    cin>>n;
    map<int, int> v;
    for(i=0; i<n; i++)
    {
    	cin>>temp;
    	v[temp]++;
	}
    map<int, int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
    {
    	cout<<itr->first<<" "<<itr->second<<"\n";
	}
        
    return 0;
}
