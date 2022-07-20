#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int ary[100]= {0};
    for(int i=0; i<n; i++){
        cin>>temp;
        ary[temp]++;
	}
    int max = 0;
    for(int i=0; i<100; i++){
        if((ary[i] + ary[i+1]) > max){
            max = ary[i]+ary[i+1];
        } 
    }
    cout<<max;
    return 0;
}
