#include<iostream>
using namespace std;
int main(){
	int n,num,temp,i,j,k,diff;
	cin>>n;
	for(i=1; i<=n; i++){
		if(i > (n+1)/2){
			diff = i - (n+1)/2;
			temp = i - diff;
		} else {
			temp = i;
		}
		for(j=temp; j<=(n/2); j++){
			cout<<" ";
		}
		num = temp;
		for(k=1; k<=temp; k++){
			cout<<num<<" ";
			num++;
		}
		num = num - 2;
		for(k=1; k<temp; k++){
			cout<<num<<" ";
			num--;
		}
		cout<<"\n";
	}
	return 0;
}
