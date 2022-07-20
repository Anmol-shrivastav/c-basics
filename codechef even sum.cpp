#include<iostream>
using namespace std;
int main()
{
	int t,n,sum=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0; i<n; i++){
		    cin>>temp;
		    sum+=temp;
		}
	    if(sum % 2 == 0){
	        cout<<1<<"\n";
	    } else {
	        cout<<2<<"\n";
	    }
	    sum = 0;
	}
	return 0;
}
