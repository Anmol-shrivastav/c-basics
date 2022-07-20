//default arrgument
#include<iostream>
using namespace std;
   float simpleinterest(float amount, float years, float rate=1)
   {
   	float simpleinterest=(amount*years*rate)/100;
   }
   int main()
   {
   	cout<<simpleinterest(10000.0,5.0)<< "/n";
   	getch();
   	return 0;
   }
