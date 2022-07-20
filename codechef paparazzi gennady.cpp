#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ary[n];
		for(long long int i=0; i<n; i++){
			cin>>ary[i];
		}
		//Logic part 
		long long int count = 0,temp,max_photo=0;
		for(long long int i=0; i<n-1; i++){
			count++;
			temp = ary[i+1];
			if(temp < ary[i]){
				
			}else if(temp >= ary[i]){
				
			}
		}
			for(long long int j=i+2; j<n; j++){
				if(ary[j] > temp){
					count++;
					temp = ary[j];
				}else if(ary[j] < temp && ary[j] < ary[i]){
					count++;
				}
				
			}
			if(count > max_photo){
				max_photo = count;
			}
			count = 0;
		}
		cout<<max_photo<<"\n";
	}
	return 0;
}
