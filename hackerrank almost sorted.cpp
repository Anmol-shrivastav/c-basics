#include<iostream>
using namespace std;
int main()
{
    int n,i,j,upindex,downindex;
    cin>>n;
    int ary[n];
    for(i=1; i<=n; i++)
        cin>>ary[i];
    for(i=1; i<n; i++)
      if(ary[i]>ary[i+1])
      break;
    if(i==n)
    cout<<"yes";
    else
    {
        if(n==2)
        cout<<"yes"<<"\n"<<"swap 1 2";
        else
        {
            
            for(i=1; i<n; i++)
            {
                if(ary[i]>ary[i+1])
                {
                    upindex = i;
                    break;
                }
            }
            for(i=n; i>1; i--)
            {
                if(ary[i]<ary[i-1])
                {
                    downindex = i;
                    break;
                }
            }
            swap(ary[upindex],ary[downindex]);
            for(i=1; i<n; i++)
              if(ary[i]>ary[i+1])
              break;
            if(i==n)
            {
                cout<<"yes"<<"\n"<<"swap "<<upindex<<" "<<downindex;
            }
            else
            {
                swap(ary[upindex],ary[downindex]);
                i = upindex;
                j = downindex;
                while(i<j)
                {
                    swap(ary[i],ary[j]);
                    i++;
                    j--;
                }
                for(i=1; i<n; i++)
                  if(ary[i]>ary[i+1])
                  break;
                if(i==n)
                {
                    cout<<"yes"<<"\n"<<"reverse "<<upindex<<" "<<downindex;
                }
                else
                {
                    cout<<"no";
                } 
            }
        }
    } 
    return 0;
}
