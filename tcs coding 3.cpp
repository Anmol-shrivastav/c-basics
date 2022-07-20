#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int oddPosSum = 0, evenPosSum = 0;
	int digitCount = 0;
	int num = n;
	while(num != 0){
		num /= 10;
		digitCount++;
	}
	
	num = n;
	while(num != 0){
		int rem = num % 10;
		num /= 10;
		
		if(digitCount % 2 == 0){
			evenPosSum += rem;
		}else{
			oddPosSum += rem;
		}
		
		digitCount--;
	}
	
	cout<<abs(evenPosSum - oddPosSum)554;
	return 0;
}
