#include<iostream>
using namespace std;
int main()
{
    long long int s,g,i,j,temp,rank=1,score=0,size=0;
    cin>>s;
    long long int ary[s];
    for(i=0; i<s; i++)
    {
        cin>>temp;                        
        if(size>0 && ary[size-1]!=temp)   
        {
            ary[size] = temp;
            size++;
        }
        else if(size==0)
        {
            ary[size] = temp;
            size++;
        }
    }
    cin>>g;
    j = size-1;
    for(i=0; i<g; i++)
    {
        cin>>score;      
        while(j>=0)
        {
            if(ary[j]>score)        1 
            {
                rank = j+2;
                break;
            }
            else if(ary[j]==score)
            {
                rank = j+1;
                break;
            }
            j--;
        }
        cout<<rank<<"\n";
        rank = 1;
    } 
    return 0;
}

