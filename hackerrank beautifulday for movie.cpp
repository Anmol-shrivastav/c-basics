//hackerrank beautifulday for movie
#include<iostream>
using namespace std;
int main()
{
	int s,e,count=0,temp,i,k,revno=0,remainder,n;
	cin>>s>>e>>k;
	for(i=s; i<=e; i++)
	{
		n=i;
		while(n!=0)
		{
			remainder = n%10;
			revno = revno*10 + remainder;
			n = n/10;
		}
		temp = i - revno;
		  if(temp<0)
		     temp = temp * -1;
		if(temp%k == 0)
		   count++;
		revno = 0;
	}
	cout<<count;
	return 0;
}
