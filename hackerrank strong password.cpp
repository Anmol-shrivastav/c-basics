#include<iostream>
using namespace std;
int main()
{
	string specialchar = ".*[-!@#$%^&*()+]+.*";
	for(int i=0; i<specialchar.length(); i++)
	{
		cout<<"index "<<i<<" - "<<specialchar[i]<<"\n";
	}
	return 0;
}#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,count=0,j;
    int number=1, loweralpha=1, upperalpha=1,spclchr=1;
    string spchr = "!@#$%^&*()-+";
    cin>>n;
    string ary,temp;
    for(i=0; i<n; i++) {
        cin>>temp;
       ary+=temp;
    }
    for(i=0; i<n; i++)
    {
        if(ary[i] >= '0' && ary[i]<='9') 
        {
            number = 0;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(ary[i] >= 'a' && ary[i]<='z') 
        {
            loweralpha = 0;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(ary[i] >= 'A' && ary[i]<='Z') 
        {
            upperalpha = 0;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<spchr.length(); j++)
        {
            if(ary[i] == spchr[j])
            {
                spclchr = 0;
                break;
            }
        }
    }
    int ans = number + loweralpha + upperalpha + spclchr;
    if(ans+n>=6)
    cout<<ans;
    else
    cout<<6-n;
    return 0;   
}

