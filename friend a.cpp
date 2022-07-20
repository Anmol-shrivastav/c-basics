//friend function 1
#include<iostream>
#include<conio.h>
using namespace std;
class Box
{   
    private:
	int length;
	public:
		Box():lenght(0) {}
    friend int displenght(Box);
};
int displenght(Box b)
{
	b.lenght+=10;
	return b.lenght;
}
int main()
{
    Box b;
    cout<<displength(b);
    return 0;
}
