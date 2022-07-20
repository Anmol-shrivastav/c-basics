#include<iostream>
using namespace std;
int main()
{
    int i,j,k,m=1,n,count=0,page=1,x=1,y;
    cin>>n>>k;
    int ary[n+1];
    for(i=1; i<=n; i++)
        cin>>ary[i];
    for(i=1; i<=n; i++)
    {
        if(ary[i]>k)
        {
            if(ary[i]%k==0)
               page = ary[i]/k;
            else
               page = ary[i]/k+1;
        }
        for(j=1; j<=page; j++)
        {
            while(m<=ary[i])
            {
                if(m%k == 0)
                {
                    if(m==x)
                       count++;
                    m++;
                    break;
                }
                else if(m==x)
                   count++;
                m++;
            }
            x++;
        }
        m=1;
        page=1;
    }
    cout<<count;
    return 0;
}

