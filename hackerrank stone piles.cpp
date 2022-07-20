#include<iostream>
using namespace std;
int main()
{
    int n,i,oddsum=0,evensum=0,temp;
    cin>>n;
    //int ary[n];
    for(i=1; i<=n; i++)
    {
        cin>>temp;
        if(i%2!=0)
            oddsum+=temp;
        else
            evensum+=temp;
    }
    if(oddsum<evensum)
        cout<<oddsum;
    else if(evensum<oddsum)
        cout<<evensum;
    else if(evensum==oddsum)
        cout<<evensum;
    return 0;
}
