#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int space, star, limit;
	
	//print upper trangle
	for(int i=1; i<=n; i++){
		//space count;
		
		space  = n-i;
		for(int j=1; j<=space; j++) cout<<" ";
		
		//count star
		star = 2 * i - 1;
		for(int j=1; j<=star; j++) cout<<"*";
		
		cout<<"\n";
	}
	
	
	//print last three row
	limit = 2 * n - 1;
	for(int i=1; i<3; i++){
		for(int j=1; j<=limit; j++){
			if(j < 4 || j > limit-3){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
