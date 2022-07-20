#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i*i<=n; i++)
    {
        if(n % i == 0) return true;
    }
    return false;
}

vector<int> removePrime(int ary[], int n) {
    vector<int> ans;
    for(int i=0; i<n; i++) {
        if(isPrime(ary[i])) {
            ans.push_back(ary[i]);
        } 
    }
    return ans;
}

int main() {
	int n;
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++) cin>>ary[i];
    vector<int> ans = removePrime(ary,n);
    vector<int> ::iterator it = ans.begin();
    int i=0;
    cout<<"[";
    while(it != ans.end())
    {
    	cout<<ans[i++];
    	if(it != ans.end()-1)
    	cout<<", ";
    	it++;
	}
	cout<<"]";
    return 0;
}

