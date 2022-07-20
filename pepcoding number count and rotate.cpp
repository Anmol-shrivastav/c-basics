#include<iostream>
using namespace std;

int CountNum(int num) {
	int div = num;
	int count = 0;
	while(div != 0) {
		div = div / 10;
		count++;
	}
	return count;
}
int rotate_mod(int r, int count) {
	r = (r<0) ? (r%count+count)%count : r%count;
	return r;
}
int rotate(int count, int r, int n) {
	int mul=1,div=1;
	for(int i=1; i<=count; i++) {
	    if(i<=r)
		mul = mul*10;
		else
		div = div*10;
	}
	int a = n%div;
	int b = n/div;
	return a*mul+b;
}
int main()
{
	int n,r;
	cin>>n>>r;
	int count = CountNum(n);
	r = rotate_mod(r,count);
	int ans = rotate(count, r, n);
	cout<<ans;
	return 0;
}
