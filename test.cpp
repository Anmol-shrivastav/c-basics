#include<iostream>
using namespace std;

void fun(int ary[]){
	ary[0] = 5;
}

int main(){
	int ary[5];
	for(int i=0; i<5; i++) cin>>ary[i];
	fun(ary);
	cout<<ary[0];
	return 0;
}
