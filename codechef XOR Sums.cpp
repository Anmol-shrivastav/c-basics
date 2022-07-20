#include<iostream>
#include<vector>
using namespace std;

long long int findSum(long long int ary[], long long int n){
	long long int sum = 0;
	for(long long int i=0; i<n; i++){
		sum+=ary[i];
	}
	return sum;
}       

long long int findXOR(long long int ary[],long long int n,long long int sublen){
	long long int xo=0, sum = 0;
	if(sublen > n)
	return 0;
	if(sublen == n)
	return findSum(ary,n);
    for(long long int i=0; i<n; i++)
	{
		long long int xo = ary[i];
		for(long long int j=i+1; j+sublen-2<n; j++)
		{
			long long int m = j;
			for(long long int k=1; k<=sublen-1; k++)
			{
			    xo = xo ^ ary[m];
				m++;
			}
			sum += xo;
			xo = ary[i];
		}
		
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n,q,sublen,sum=0;
	cin>>n;
	long long int ary[n];
    for(long long int i=0; i<n; i++){
    	cin>>ary[i];
	}
	cin>>q;
	for(long long int i=0; i<q; i++){
		cin>>sublen;
		if(sublen == 1){
			sum = findSum(ary,n);
			cout<<sum<<"\n";
		} else {
			for(long long int j=2; j<=sublen; j++){
				sum += findXOR(ary,n,j);
			}
			sum += findSum(ary,n);
			cout<<sum<<"\n";
		}
		sum = 0;
	}
	return 0;
}
