#include<iostream>
using namespace std;

int main()
{
    int a[2], b[2],i,j,k,alice=0,bob=0;
    for(i=0; i<=2; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<=2; j++)
    {
        cin>>b[j];
    }
    for(k=0; k<=2; k++)
    {
        if(a[k] > b[k])
        {
            alice = alice + 1;
        }
        if(a[k] < b[k])
        {
            bob = bob + 1;
        }
    }
    
        cout<<alice<<" "<<bob;
        return 0;
}

