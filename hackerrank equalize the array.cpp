#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    int i,n,count=0,max=0,temp;
    cin>>n;
    map<int,int> ary1;
    int ary[n];
    for(i=0; i<n; i++)
    {
        cin>>temp;
        ary[i] = temp;
        ary1[temp]++;
    }
    map<int,int>::iterator it;
    for(it=ary1.begin(); it!=ary1.end(); it++)
        if(it->second>max)
        {
            max = it->second;
        }
    cout<<n-max;
           
          
    return 0;

}

