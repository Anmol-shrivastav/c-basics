//string concatenation
#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
	double a=4.0;
	double b=12.0;
    cout << fixed << setprecision(1) <<a+b<< endl;  
	string s = "Hackerrank ";
	string c;
	getline(cin, c);
	cout<<s<<c;
    return 0;
    
}
