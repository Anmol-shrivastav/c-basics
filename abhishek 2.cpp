#include<iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	if(number == 0){
		cout<<"-1";
		return 0;
	}
	
	int a = 0, b = 1, c = 1;
	while(number > 0){
		cout<<a<<" ";
		a = b;
		b = c;
		c = a + b;
		number--;
	}
	return 0;
}
