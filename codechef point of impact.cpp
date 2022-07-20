#include<iostream>
using namespace std;

void myCoordinate(int n,int k,int x,int y){
	//move to right
	if((n - x) < (x) || x == n - x){
		int firsty = y + (n - x); //x is n
		if(firsty == n){
			cout<<n<<" "<<n<<"\n";
		}else {
		    int secondx = firsty;   //y is n
		    int fourthx = x - y;    //y is 0
		    int thirdy = fourthx;   //x is 0
		    int h = k % 4;
		    if(h == 1)
		    cout<<n<<" "<<firsty<<"\n";
		    else if(h == 2)
		    cout<<secondx<<" "<<n<<"\n";
		    else if(h == 3)
		    cout<<0<<" "<<thirdy<<"\n";
		    else if(h == 0)
		    cout<<fourthx<<" "<<0<<"\n";
	    }
	} else if((n - x) > (x)){
		int firsty = y + x; //x is 0
		if(firsty == n){
			cout<<0<<" "<<n<<"\n";
		} else {
			int secondx = n - (x + y); // y is n
			int thirdy = secondx; //x is n
			int fourthx = firsty; //y is 0
			int h = k % 4;
		    if(h == 1)
		    cout<<0<<" "<<firsty<<"\n";
		    else if(h == 2)
		    cout<<secondx<<" "<<n<<"\n";
		    else if(h == 3)
		    cout<<n<<" "<<thirdy<<"\n";
		    else if(h == 0)
		    cout<<fourthx<<" "<<0<<"\n";
		}
	}
}

int main(){
	int t,n,k,x,y;
	cin>>t;
	while(t--){
		cin>>n>>k>>x>>y;
		myCoordinate(n,k,x,y);
	}
	return 0;
}
