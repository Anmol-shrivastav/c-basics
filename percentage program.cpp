#include<iostream>
using namespace std;

int main()
{
	float a,b,c,d,e,f,total,per;
	cout<<"Enter obtained marks in all six subjects""\n";
	cout<<"Enter obtained marks in subject 1 =";
	cin>>a;
	cout<<"Enter obtained marks in subject 2 =";
	cin>>b;
	cout<<"Enter obtained marks in subject 3 =";
	cin>>c;
	cout<<"Enter obtained marks in subject 4 =";
	cin>>d;
	cout<<"Enter obtained marks in subject 5 =";
	cin>>e;
	cout<<"Enter obtained marks in subject 6 =";
	cin>>f;
	total=(a+b+c+d+e+f);
	per=total/6;
	cout<<"You Got Percentage =" <<per<<"\n";
	if((per<=100) && (per>=95))
	{
		cout<<"You got A+ Grade";
	}
	if((per<95) && (per>=90))
	{
		cout<<"You Got A Grade";
	}
	if((per<90) && (per>=80))
	{
		cout<<"You Got B Grade";
	}
	if((per<80) && (per>=70))
	{
		cout<<"You Got C Grade";
	}
	if((per<70) && (per>=60))
	{
		cout<<"You Got D Grade";
	}
	if(per<60)
	{
		cout<<"You are fail";
	}
	return 0;
	
}
