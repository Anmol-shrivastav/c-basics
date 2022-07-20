#include<iostream>
using namespace std;
void fun(int *a){
	*a = 10;
}
int main(){
	int a = 5;
	//int *p = &a;
	fun(&a);
	cout<<a;
	return 0;
}
