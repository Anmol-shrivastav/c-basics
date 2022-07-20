//multiple inheritance 
#include<iostream>
#include<conio.h>
using namespace std;
class studentinfo
{
	protected:
		int roll_no;
		public:
			int getroll(int x)
			{
				roll_no=x;
			}
};
class marks
{
	protected:
		int sub1,sub2;
		public:
			int getmarks(int y, int z)
			{
				sub1=y;
				sub2=z;
			}
};
class totalmarks : public studentinfo, public marks 
{
	protected:
		int total;
		public:
			int disproll(void)
			{
				cout<<"Roll number = "<<roll_no<< "\n"; 
			}
			int dispsub(void)
			{
				cout<<"Marks in subject 1 = "<<sub1<<"\n";
				cout<<"Marks in subject 2 = "<<sub2<<"\n";
				
			}
			int disptotal(void)
			{
				total=sub1+sub2;
				cout<<"Total marks = "<<total<<"\n";
			}
};
int main()
{
	totalmarks obj;
	obj.getroll(1);
	obj.getmarks(10,20);
	obj.disproll();
	obj.dispsub();
	obj.disptotal();
	return 0;
}














