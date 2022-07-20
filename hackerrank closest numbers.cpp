#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int min = 10000000;
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            int temp = abs(ary[i] - ary[j]);
            if(temp < min){
                min = temp;
            }
        } 
    }
    for(int i=0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            int temp = abs(ary[i] - ary[j]);
            if(temp == min){
                cout<<ary[i]<<" "<<ary[j]<<" ";
            }
        } 
    }
    return 0;
}
