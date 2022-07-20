//Bankaccount
#include<iostream>
#include<conio.h>
using namespace std;
class bank
{   
    string name;
    int accno,balance=0,witamt,amt;
	public:
		int open(void);
		int deposit(void);
		int withdraw(void);
		int check_balance(void);
};
int bank :: open(void)
{
	cout<<"Enter your name = ";
	cin>>name;
	cout<<"Enter your account number = ";
	cin>>accno;
	cout<<"Your account has been created" "\n";
	cout<<"*****Account Details*****" "\n";
	cout<<"Account holder name = "<<name<<"\n";
	cout<<"Account number = "<<accno<<"\n";
	cout<<"Your account balance is "<<balance<<"\n";
}
int bank :: deposit(void)
{    
	cout<<"Enter the amount you want to deposit = ";
	cin>>amt;
	balance=balance+amt;
	cout<<"Total balance in your account is "<<balance<<"\n";
	
}
int bank :: withdraw(void)
{
	cout<<"Enter the amount that you want to withdraw = ";
	cin>>witamt;
	if(witamt>balance)
	{
		cout<<"Insufficient balance" "\n";
	}
	else
	{
		balance=balance-witamt;
		cout<<"Your acount balance is "<<balance<<"\n";
	}
}
int bank :: check_balance(void)
{
	cout<<"Your account balance is "<<balance<<"\n";
}
int main()
{
	bank b1;
	int choice;
	cout<<"1 for account open \n2 for deposit amount \n3 for withdraw amount \n4 for check balance \n0 for Exit" "\n";
	cout<<"Enter your choice = ";
	cin>>choice;
	while(choice!=0)
	{
		switch(choice)
		{
			case 1:
				b1.open();
				break;
			case 2:
				b1.deposit();
				break;
			case 3:
				b1.withdraw();
				break;
			case 4:
				b1.check_balance();
				break;
			default:
			cout<<"Invaid input " "\n";	
			
		}
	cout<<"1 for account open \n2 for deposit amount \n3 for withdraw amount \n4 for check balance \n0 for Exit" "\n";
	cout<<"Enter your choice = ";
	cin>>choice;
	}
	
return 0;
getch();
}

