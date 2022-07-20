//Default arrgument with class
#include<iostream>
#include<conio.h>
using namespace std;
class Default
{
    public:
    	int simp(int p, int t, int r=3);
};
int Default::simp(int p, int t, int r)
{
	int si;
	si=(p*t*r)/100;
	cout<<si<< "\n";
}
int main()
{
	Default a;
	a.simp(10000.0,2.0);
	return 0;
}  
