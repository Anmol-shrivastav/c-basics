#include<iostream>
#include<string>
using namespace std;

int Factorial(int n) {
	int i,fact = 1;
	for(i=n; i>1; i--) {
		fact*=i;
	}
	return fact;
}

void Permutations(string str, int fact) {
	int i, div, mod, num, j;
	string temp;
	for(i=0; i<fact; i++) {
		num = i;
		div = str.length();
		temp = str;
		for(j=div; j>=1; j--) {
			mod = num % j;
			num/=j;
			cout<<temp[mod];
			temp.erase(mod, 1);
		}
		cout<<"\n";
	}
}

int main()
{
	int num;
	string str;
	cin>>str;
	num = str.length();
	int fact = Factorial(num);
	Permutations(str,fact);
	return 0;
}
