/* (1) Implicit conversion is a part of type casting or type conversion
(2)this type conversion is done by compiler automatically for avoid the loss of data */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char x='a';            //Here 'a' is a character value but it automatically converted in integer type
    int y=10;              //The value of 'a' from ANSII is 97
    int z;
    z=x+y;
	cout<<z;
	return 0;
	
}
