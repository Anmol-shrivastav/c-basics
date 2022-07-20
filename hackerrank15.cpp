#include<iostream>
#include<string>

using namespace std;
int main()
{
    int up=0,down=0,i,n,count=0;
    cin>>n;
    string str;
    cin>>str;
    for(i=0; i<n; i++)
    {
        if(str[i]=='U')
        up++;
        else if(str[i]=='D')
        down++;
        if(down>up)
        {
        	i++;
            while(i<n)
            {
                if(str[i]=='U')
                 up++;
                else if(str[i]=='D')
                 down++;
                 if(up==down)
                 count++;
                 i++;
            }
            break;
        }
    }
    cout<<count;
    return 0;
}
