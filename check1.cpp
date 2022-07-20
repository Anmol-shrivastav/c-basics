#include<iostream>
using namespace std;
int main(){
	int a=0,b=16;
	int res = 0,num1,num2;
    for(int i=a; i<b; i++){
    	for(int j=i+1; j<=b; j++){
    		int temp = i ^ j;
    		if(temp == c){
    			num1 = i;
    			num2 = j;
			}
		}
	}
	cout<<res<<"\n"<<num1<<" "<<num2;
	return 0;
}
