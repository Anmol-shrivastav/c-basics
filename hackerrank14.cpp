#include<iostream>
using namespace std;
int main()
{
    int n,p,i,m,countfront=0,countback=0;
    cin>>n>>p;
    int ary[n];
    for(i=0; i<=n; i++)
    {
        ary[i] = i;
    }
    
    for(i=0; i<=n; i++)
    {
        if(i!=0 && i%2==0)
        {
            countfront++;
        }
        if(ary[i] == p)
        {
            break;
        }
    }
    for(i=n; i>=0; i--)
    {
        if(ary[i] == p)
        {
            break;
        }
        if(i!=0 && i%2!=0 && i!=n)
        {
            countback++;
        }
    }
    if(countfront<countback)
    {
        cout<<countfront;
    }
    else
    {
        cout<<countback;
    }
    return 0;
}
