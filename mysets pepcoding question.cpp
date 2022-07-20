#include<iostream>
#include<vector>
using namespace std;

int mySets(int ary[],int i,int n,int sum1,int sum2,string setA,string setB){
    if(i > n) {
        if(sum1 == sum2){
            cout<<setA<<" = "<<setB<<"\n";
            return 1;
        }else {
            return 0;
        }
    }
    int count = 0;
    count+=mySets(ary,i+1,n,sum1+ary[i],sum2,setA+to_string(ary[i]),setB);
    count+=mySets(ary,i+1,n,sum1,sum2+ary[i],setA,setB+to_string(ary[i]));
    return count;
} 

int main(){
	int n;
	cin>>n;
	int ary[n];
	for(int i=0; i<n; i++){
	    cin>>ary[i];
	}
	cout<<mySets(ary,0,n-1,0,0,"","");
	return 0;
}
