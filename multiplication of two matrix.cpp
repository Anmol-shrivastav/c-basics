//Multiplication of two matrix
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	cout<<"Enter the number of rows of matrix = ";
	cin>>r;
	cout<<"Enter the number of column of matrix = ";
	cin>>c;
	cout<<"Enter the elements of first matrix" "\n";
	for(i=0;i<r;i++)                                      //insertion of matrix element
	{
	for(j=0;j<c;j++)
	{
		cin>>a[i][j];	
	}
    }  
    cout<<"First Matrix is" "\n";                                   //printing matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
    }
    
    
	cout<<"Enter the elements of second matrix" "\n";
	for(i=0;i<r;i++)                                      //insertion of matrix element
	{
	for(j=0;j<c;j++)
	{
		cin>>b[i][j];	
	}
    }  
    cout<<"Second Matrix is" "\n";                                   //printing matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
    }
    
    cout<<"Multiplication of two matrix is" "\n";
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    	mul[i][j]=0;
    	for(k=0;k<c;k++)
    	{
    		mul[i][j]+=a[i][j]*b[i][j];
		}
		}
	}
	
	 for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		cout<<mul[i][j]<<" ";
		}
	cout<<"\n";
    }
	
	return 0;
}
