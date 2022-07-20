//concatenation of two strings
#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
    string s1,s2,result;
    int a,b;
    cout<<"Enter first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	cout<<"Sum of two numbers is = " <<a+b<<"\n";
    cout<<"Enter first string = ";
    cin>>s1;
    cout<<"Enter second string = ";
    cin>>s2;
    result=s1+s2;
    cout<<"Concatination of two strings is = "<<result<< "\n";
    return 0;
    
	
}
