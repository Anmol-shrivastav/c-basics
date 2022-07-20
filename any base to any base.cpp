#include<iostream>
using namespace std;

//any base to decimal -> decimal to any base

int pow(int b, int p){
	int res = 1;
	while(p--){
		res = res * b;
	}
	return res;
}
int anyBaseToDecimal(int n, int b){
	if(b == 10) return n;
	int p = 0, res = 0;
	while(n != 0){
		int rem = n % 10;
		res = res + rem * pow(b, p);
		n = n / 10;
		p++;
	}
	return res;
}

int decimalToAnyBase(int n, int b){
	if(b == 10) return n;
	int place = 1, res = 0;
	while(n != 0){
		int rem = n % b;
		res = res + rem * place;
		place *= 10;
		n /= b;
	}
	return res;	
}

int anyBaseToAnyBase(int currBase, int desBase, int num){
	num = anyBaseToDecimal(num, currBase);
	num = decimalToAnyBase(num, desBase);
	return num;
}

int main(){
	cout<<anyBaseToAnyBase(10, 8, 634);
	return 0;
}
