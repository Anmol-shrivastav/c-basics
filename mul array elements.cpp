//array element multiplication 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    long temp=1;
    int i=0;
	int arry[12]={111,222,333,444,555,666,777,888,999,101,112};
	for(i=0;i<11;i++)
	{
		 temp=temp*arry[i];
		
	}
	cout<<"The result of multiplication is " <<temp<< "\n";
	return 0;
}
