#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int n = 5, dis = 10;
	int x = 0 , y = 0, j = 0;
	for(int i=0; i<t; i++, j++){
		
		if(j == 5){
			j = 0;
		}
		
		if(j == 0){
			x += dis;
			dis += 10;
		}else if(j == 1){
			y += dis;
			dis += 10;
		}else if(j == 2){
			x -= dis;
			dis += 10;
		}else if(j == 3){
			y -= dis;
			dis += 10;
		}else{
			x += dis;
			dis += 10;
		}
		
	}
	cout<<x<<" "<<y;
	return 0;
}
