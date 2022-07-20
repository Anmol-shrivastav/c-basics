#include<iostream>
using namespace std;

int findHcf(int a,int b){
    int rem;
	while(a % b != 0){
	    rem = a % b;
	    a = b;
	    b = rem;
	}
	return b;
}

int findLcm(int a,int b,int hcf){
	int lcm = (a * b) / hcf;
	return lcm;
	
}

int main(){
	int num1,num2;
	cin>>num1>>num2;
	int hcf = findHcf(max(num1,num2),min(num1,num2));
	int lcm = findLcm(num1,num2,hcf);
	cout<<hcf<<"\n";
	cout<<lcm<<"\n";
	return 0;
}
