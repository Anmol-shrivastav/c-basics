#include<iostream>
using namespace std;

void GradingSystem(int n)
{ 
   if(n>90)
   cout<<"excellent";
   else if(n>80)
   cout<<"good";
   else if(n>70)
   cout<<"fair";
   else if(n>60)
   cout<<"meet expectations";
   else
   cout<<"below par";	
}
int main()
{
	int marks;
	cin>>marks;
	GradingSystem(marks);
	return 0;
}
