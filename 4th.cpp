#include<iostream>
#include<conio.h>
using namespace std;
class simple  
{ 
    public:
	int simp(int p, int t, int r=2)  {
		int si = (p*r*t)/100;
		cout<<si<<"\n";
	}
};
int main()
{
	simple obj;
	obj.simp(20000,2);
	return 0;
}
