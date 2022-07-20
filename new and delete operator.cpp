#include<iostream>
using namespace std;
int main()
{
	int n,i;
	float *p,total=0;
	cout<<"Enter number of subjects= ";
	cin>>n;
    
	p=new float[n];
	
	cout<<"Enter marks""\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter marks in subject = "<<(i+1);
		cin>>p[i];
		}	
	
	
	
	for(i=0;i<n;i++)
	{
		cout<<"\nMarks in subject = "<<(i+1);
		cout<<*(p+i);
		total=total+*(p+i);
		
	}
    cout<<"\nTotal Marks= "<<total;
    return 0;
	
}
