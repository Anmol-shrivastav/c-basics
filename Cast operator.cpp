//Explicit conversion by cast operator := it can be done in four ways by using
// static cast
// dynamic cast
// const cast
// Re interpret cast
// A program for Explicit conversion by using cast operator
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double a=1.5;
	float b=static_cast<int>(a)+2;    //Explicit conversion by static cast
	cout<<b;
	return 0;
}
 

