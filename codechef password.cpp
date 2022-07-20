#include<iostream>
using namespace std;
int main()
{
    int t,lowerletter=0,upperletter=0,num=0,spcl=0;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(str.length() < 10)
        {
            cout<<"NO"<<"\n";
        }
        else 
        {
            for(int i=0; i<str.length(); i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                {
                    lowerletter++;
                    break;
                }
            }
            for(int i=0; i<str.length(); i++)
            {
                if(i > 0 && i < str.length()-1 && str[i] >= 'A' && str[i] <= 'Z')
                {
                    upperletter++;
                    break;
                }
            }
            for(int i=0; i<str.length(); i++)
            {
                if(i > 0 && i < str.length()-1 && str[i] - '0' >= 0 && str[i] - '0' <= 9)
                {
                    num++;
                    break;
                }
            }
            for(int i=0; i<str.length(); i++)
            {
                if((i > 0 && i < str.length()-1) && (str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '&' || str[i] == '?'))
                {
                    spcl++;
                    break;
                }
            }
            if(lowerletter > 0 && upperletter > 0 && num > 0 && spcl > 0)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
            lowerletter = upperletter = num = spcl = 0;
        }
    }
    return 0;
}
