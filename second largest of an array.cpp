#include<iostream>
using namespace std;

int print2largest(int arr[], int n){
    int f = arr[0], s = -1, i;      //f == first greater and s = second greater
    for(i=1; i<n; i++){
        if(f < arr[i]){
            s = f;
            f = arr[i];
        }else if(arr[i] > s && arr[i] != f){
            s = arr[i];
        }
    }
    return s;
}
int main(){
	int n;
	cin>>n;
	int ary[n];
	for(int i=0; i<n; i++)
		cin>>ary[i];
		
	int ans = print2largest(ary, n);
	cout<<ans;	
	return 0;
}
