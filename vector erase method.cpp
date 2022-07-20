#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,i,temp;
	cin>>n;
    vector<int> check;
    for(i=0; i<n; i++)
    {
    	cin>>temp;
        check.push_back(temp);
	}
	vector<int>::iterator it;
	i=0;
	for(it = check.begin(); it!=check.end(); it++,i++)
	   cout<<check[i]<<" ";
    it = check.begin();
    check.erase(it+1);
    cout<<"\n";
    
    i=0;
	for(it = check.begin(); it!=check.end(); it++,i++)
	   cout<<check[i]<<" ";
	   
	return 0;
}
