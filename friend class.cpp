//Friend class
#include<iostream>
using namespace std;
class A  
{
	int a;
	public:
		A()
		{
			a=10;
		}
		friend class B;
};
class B 
{
	int b;
	public:
		void dispA(A& x)
		{
			std::cout<<"A::a=" <<x.a;
		}
};
int main()
{
	A a;
	B b;
	b.dispA(a);
	return 0;
}
