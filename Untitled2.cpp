// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
#define ll long long int
// Recursive function to return gcd of a and b
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Driver program to test above function
int main()
{
  	ll n = 4,a,b;
    while(true){
	cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b)<<"\n";
    }
	return 0;
}

