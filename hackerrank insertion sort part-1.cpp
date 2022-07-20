#include<iostream>
using namespace std;
int main()
{
    int i,n,temp,j;
    cin>>n;
    int ary[n];
    for(i=0; i<n; i++)
       cin>>ary[i];
    temp = ary[n-1];
    i=n-2;
    while(ary[i]>temp)
    {
        ary[i+1] = ary[i];
        for(j=0; j<n; j++)
           cout<<ary[j]<<" ";
        cout<<"\n";
        i--;
    }
    if(ary[i]<temp)
       ary[i+1] = temp;
    for(j=0; j<n; j++)
        cout<<ary[j]<<" ";
    return 0;
}
