#include<iostream>
using namespace std;
int main()
{
	int t,n1,n2,n3;
	cin>>t;
	while(t--){
	    cin>>n1>>n2>>n3;
	    int m = n1;
	    if(m < n2){
	        m = n2;
	    }
	    if(m < n3){
	        m = n3;
	    }
	    if(m == n1){
	        if(n1 == n2 + n3)
	        cout<<"YES"<<"\n";
	        else
	        cout<<"NO"<<"\n";
	    } else if(m == n2){
	        if(n2 == n1 + n3)
	        cout<<"YES"<<"\n";
	        else
	        cout<<"NO"<<"\n";
	    }else {
	        if(n3 == n2 + n1)
	        cout<<"YES"<<"\n";
	        else
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
