#include<iostream>
using namespace std;
int main(){
	int ary[4] = {1,1,0,0};
	int i=0,sum = 0;
	while(i<4){
		sum = (2*sum) + ary[i];
		i++;
	}
	cout<<sum;
	return 0;
}
