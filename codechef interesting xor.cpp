#include<iostream>
using namespace std;

//long long int getMyAns(long long int a, long long int b, long long int c){
//	long long int ans = 0;
//	for(long long int i=a; i<b; i++){
//    	for(long long int j=i+1; j<=b; j++){
//    		long long int temp = i ^ j;
//    		cout<<"xor = "<<temp<<" num1 = "<<i<<" num2 = "<<j<<"\n";
//    		if(temp == c){
//    			//cout<<i<<" "<<j<<"\n";
//    			if(i*j > ans)
//    			ans = i*j;
//			}
//		}
//	}
//	return ans;
//}

long long int getMyAns(long long int a, long long int b, long long int c,long long int idx){
	a = (b+1)/2;
	a--;
	b = a ^ c;
	return (a*b);
	//a = (c+1)/2;
	//b = (b+1) - idx;
//	for(long long int i=a; i>=0; i--){
//    	for(long long int j=b; j>i; j--){
//    		long long int temp = i ^ j;
//    		cout<<"xor = "<<temp<<" num1 = "<<i<<" num2 = "<<j<<"\n";
//    		if(temp == c){
//    			return (i*j);
//			}
//		}
//	}
}

int main(){
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
	long long int ary[31] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
	int t;
	cin>>t;
	while(t--){
		long long int c;
		cin>>c;
		int i=0;
		while(ary[i] <= c){
			i++;
		}
		long long ans = getMyAns(0,ary[i]-1,c,i);
		cout<<ans<<"\n";
	}
	return 0;
}
