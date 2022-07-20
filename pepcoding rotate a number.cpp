#include<iostream>
using namespace std;

int findNod(int num){
	int p = 1;
	num = num / 10;
	while(num > 0){
		num /= 10;
		p++;
	}
	return p;
}

int findMyRotation(int num, int r,int nod){
	if(r == nod)
	return num;
    int p = 1;
    int temp = r;
    while(temp > 0){
    	p = p * 10;
    	temp--;
	}
	int mul = 1;
	temp = nod - r;
	while(temp > 0){
		mul = mul * 10;
		temp--;
	}
	int rem = num % p;
	int div = num / p;
	int res = rem * mul + div;
	return res;
	
}

int main(){
	int num;
	cin>>num;
	int nod = findNod(num);
	//cout<<nod;
	int r;
	cin>>r;
	if(r < 0){
		r = r * -1;
		r = r % nod;
		r = nod - r;
	} else {
		r = r % nod;
	}
	int ans = findMyRotation(num,r,nod);
	cout<<ans;
	return 0;
}
