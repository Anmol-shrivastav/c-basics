//public and private
#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	private:
		int x;
		public:
			void disp(void)
			{
	            cout<<"enter x";
	            cin>>x;
	            cout<<x;
            }
		
};


int main()
{
	a obj;
	obj.disp();
	return 0;
}
