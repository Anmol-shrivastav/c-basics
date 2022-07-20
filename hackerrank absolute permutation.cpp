#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,n,k,i,j,m=1.0,flag=0.0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==0)
        {
            for(i=1; i<=n; i++)
               cout<<i<<" ";
            cout<<"\n";
        }
        else if(fmod((n/k),2.0)!=0.0)   
        {
            cout<<"-1"<<"\n";
        }
        else
        {
            for(i=1; i<=n/k; i++)
            {
                for(j=1; j<=k; j++)
                {
                    if(flag==0)
                    {
                        cout<<m+k<<" ";
                    }
                    else
                    {
                        cout<<abs(m-k)<<" ";
                    }
                    m++;
                }
                flag = (flag==0) ? 1:0;
            }
            cout<<"\n";
            flag=0;
            m=1;
        }
    }
    return 0;
}

