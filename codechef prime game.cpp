#include<iostream>
using namespace std;
bool is_Prime(int num){
	int i;
	for(i=2; i*i<=num; i++){
		if(num % i == 0){
			break;
		}
	}
	if(i*i>num) return true;
	else return false;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int count=0;
	int prime_count[1000000];
	prime_count[0] = prime_count[1] = 0;
	int n=2;
	for(int i=2; i<=1000000; i++){
		if(is_Prime(i)){
			count++;
			prime_count[n++] = count;
		} else {
			prime_count[n++] = count;
		}
	}
	int t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		if(prime_count[x] > y){
			cout<<"Divyam"<<"\n";
		} else {
			cout<<"Chef"<<"\n";
		}
	}
	return 0;
}
