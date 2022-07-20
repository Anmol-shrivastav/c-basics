#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    long long int t,i,n,j,k,size,ci;
    string str;
    char small='\0';
    cin>>n;
    for(t=0; t<n; t++)
    {
        cin>>str;
        size = str.size();
        for(i=size-1; i>0; i--)
        {
            if(str[i]>str[i-1])
               break;
        } 
        if(i==0)
        {
            str = "no answer";
        }
        else
        {
            for(j=i; j<size; j++)
            {
                if(str[j]>str[i-1])
                {
                    if(small=='\0')
                    {
                        small = str[j];
                        k = j;
                    }
                    else if(str[j]<small)
                    {
                        small = str[j];
                        k = j;
                    }
                }
            }
            small = str[k];
            str[k] = str[i-1];
            str[i-1] = small;
            for(i=i; i<size-1; i++)    
            {
                ci = i;
                for(j=i+1; j<size; j++)
                    if(str[ci]>str[j])
                       ci = j;
                small = str[ci];
                str[ci] = str[i];
                str[i] = small;
            }
            small='\0';
        }     
        cout<<str<<"\n";
    }
    return 0;
}

