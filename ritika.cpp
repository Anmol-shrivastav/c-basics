#include <iostream>
#include<math.h>
#include<vector>
#define double long long int;
using namespace std;

long long int helper(long long int a,long long int b,vector<long long int> X,vector<long long int> Y,long long int n){
        long long int count=0;
        for(long long int i=0;i<n;i++){
            long long int ax=a-X[i];
            long long int ay=b-Y[i];
            
            if(ax==0 && ay==0){
                count+=0;
            }else if((ax==0 && ay!=0) || (ax!=0 && ay==0)){
                count++;
            }else if(abs(ax)==abs(ay)){
                count++;
            }else{
                count+=2;
            }
        }
        return count;
    }


int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    
	    vector<long long int> X;
	    vector<long long int> Y;
	    for(long long int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        X.push_back(temp);
	    }
	    for(long long int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        Y.push_back(temp);
	    }
	    
	    long long int minSteps=INT_MAX;
	    long long int a,b;
	    
	    for(long long int i=0;i<n;i++){
	        for(long long int j=0;j<n;j++){
	            //finding mean point
		            a=(X[i] + X[j])/2;
		            b=(Y[i]+Y[j])/2;
		            minSteps=min(minSteps,helper(a,b,X,Y,n));
		            
		            //intersection point about x and Y
		            a=X[i];
		            b=Y[j];
		            minSteps=min(minSteps,helper(a,b,X,Y,n));
		             
		            //intersection point between x+y and x-y
		            long long int ip1=X[i]+Y[i];
		            long long int ip2=X[j]+Y[j];
		             minSteps=min(minSteps,helper(a,b,X,Y,n));
		             
		            //intersection point between x+y and X
		            long long int ip3=X[i]+Y[i];
		            a=X[j];
		            b=ip3-a;
		             minSteps=min(minSteps,helper(a,b,X,Y,n));
		             
		            //intersection point between x+y and y 
		             long long int ip4=X[i]+Y[i];
		            b=Y[j];
		            a=ip4-b;
		             minSteps=min(minSteps,helper(a,b,X,Y,n));
		             
		             //intersection point between x-y and x 
		             long long int ip5=X[i]-Y[i];
		             a=X[j];
		             b=a-ip5;
		             minSteps=min(minSteps,helper(a,b,X,Y,n));
		             
		             //intersection point between x-y and y
		              long long int ip6=X[i]-Y[i];
		             b=Y[j];
		             a=ip6-b;
		             minSteps=min(minSteps,helper(a,b,X,Y,n));
	        }
	    }
	    cout<<minSteps;
	    
	    
	}
	return 0;
}
