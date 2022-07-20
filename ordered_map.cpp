#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int, int> ary;
	ary[1] = 10;
	ary[20] = 20;
	ary[3] = 30;
	
	map<int, int>::iterator it = ary.end();
	while(it!=ary.begin()){
		cout<<it->first<<" "<<it->second<<"\n";
		
		it--;
	}
	return 0;
}
