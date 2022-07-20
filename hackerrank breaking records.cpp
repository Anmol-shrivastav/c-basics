#include<iostream>
using namespace std;
int main()
{
    int n,i,min,max,mincount=0,maxcount=0;
    cin>>n;
    int ary[n];
    for(i=0; i<n; i++)
    {
        cin>>ary[i];
        if(i=0)
         max = min = ary[i];
        if(ary[i]<min && i>0)
        {
            mincount++;
            min = ary[i];
        }
        else if(ary[i]>max && i>0)
        {
            maxcount++;
            max = ary[i];
        }
    }
    cout<<maxcount<<" "<<mincount<<"\n";
    return 0;
}
