//large number factorial 
#include<iostream>
using namespace std;

	#define max 1000               //defination of max variable 
	int num;
	int multiply(int x, int fact[], int factsize);
	
	void factorial(void)
	{
		cout<<"Enter a number for finding factorial = ";
		cin>>num;
		cout<<"\n";
		int fact[max];
		fact[0]=1;
		int factsize=1;
		for(int x=2; x<=num; x++)
		{
			factsize=multiply(x, fact, factsize);
		}
		cout<<"Factorial of the given number is " "\n";
		for(int i=factsize-1; i>=0; i--)
		{
			cout<<fact[i];
		}
	}
		int multiply(int x, int fact[], int factsize)
		{
			int carry =0;
			for(int i=0; i<factsize; i++)
			{
				int product=fact[i]*x+carry;
				fact[i]= product%10;
				carry = product/10;
			}
			while(carry)
			{
				fact[factsize] = carry%10;
				carry = carry/10;
				factsize++;
			}
			return factsize;
		}
	
	
int main()
{
	factorial();
	return 0;
}





















