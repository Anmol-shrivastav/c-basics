#include<iostream>
using namespace std;
int main()
{
	int t,n,oddcount=0,evencount=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ary[n];
		for(int i=0; i<n; i++){
		    cin>>ary[i];
		}
		for(int i=0; i<n; i++){
		    if(ary[i] % 2 == 0){
		        evencount+=1;
		    } else {
		        oddcount+=1;
		    }
		}
		if(evencount < oddcount){
		    cout<<evencount<<"\n";
		} else {
		    cout<<oddcount<<"\n";
		}
		evencount = oddcount = 0;
	}
	return 0;
}
