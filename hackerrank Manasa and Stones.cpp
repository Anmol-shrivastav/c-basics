#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int k,t,n,a,b,i,j,s,temp,length=0,ci,last;
    cin>>t;
    vector<int> ary;
    for(k=0; k<t; k++)
    {
        cin>>n>>a>>b;
        for(i=n-1,j=0; i>=0&&j<=n-1; i--,j++)
        {
            ary.push_back((i*a)+(j*b));
        }
        sort(ary.begin(), ary.end());
        for(i=0; i<ary.size()-1; i++)
            if(ary[i]!=ary[i+1])
               ary[length++] = ary[i];
        ary[length++] = ary[ary.size()-1];
        
        for(i=0; i<length; i++)
        {
            cout<<ary[i]<<" ";
        }
        ary.clear();
        cout<<"\n";
    }
}

