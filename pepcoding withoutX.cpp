#include<iostream> 
using namespace std;

void withoutX(string str) {
	if(str[0] == 'x' && str[1] == 'x')
	str.erase(0,2);
	else if(str[0] == 'x')
	str.erase(0,1);
	else if(str[1] == 'x')
	str.erase(1,1);
	cout<<str;
}

int main() {
	string str;
	cin>>str;
	withoutX(str);
	return 0;
}
