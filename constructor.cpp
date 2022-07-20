//constructor
#include<iostream>
using namespace std;
class base
{
    public:
    	string name;
    	int age;
    	base(string name, int age);
    	
};
base :: base(string name,int age)
{
	cout<<"This is my first constructor"<<"\n";
	cout<<name<<" "<<age;
}
int main()
{
	string s="anmol";
	int age = 20;
	base(s,age);
	return 0;
}
