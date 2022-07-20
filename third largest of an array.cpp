#include<iostream>
using namespace std;

int print3rdLargest(int nums[], int n){
    long long int f = nums[0], s = LLONG_MIN, t = LLONG_MIN;   ////f == first greater and s = second greater and t == third largest 
    for(int i=1; i<n; i++){
        if(nums[i] > f){
            t = s;
            s = f;
            f = nums[i];
        }else if(s < nums[i] && nums[i] != f){
            t = s;
            s = nums[i];
        }else if(t < nums[i] && nums[i]!=s && nums[i]!=f){
            t = nums[i];
        }
    }
    if(t == LLONG_MIN)
        return -1;                            //Third Largest Not exist
    return t;
}
int main(){
	int n;
	cin>>n;
	int ary[n];
	for(int i=0; i<n; i++)
		cin>>ary[i];
		
	int ans = print3rdLargest(ary, n);
	cout<<ans;	
	return 0;
}
