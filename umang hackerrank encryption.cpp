#include<iostream>
using namespace std;
#include<string.h>
#include <cmath> 
#include<math.h>
int main(){
    string s;
    int l=0;
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
        if(s[i]!=' ')
          l++;
    double sq = sqrt(l);
    int a,b,x=-1;
    int i=floor(sq);
    int j=ceil(sq);
    if(i*j<l){
        i=i+1;
    }
    char str[i][j];
    for(a=0; a<i; a++)
    {
    	for(b=0; b<j;)
    	{
    		if(++x>s.length()-1)
			{
				str[a][b] = '\0';
				b++;
			}
    		else if(s[x]!=' ' && s[x]!='\0')
    		{
    			str[a][b] = s[x];
    			b++;
			}
		}
	}
/*	for(a=0; a<i; a++)
	{
		for(b=0; b<j; b++)
		{
			cout<<str[a][b];
		}
		cout<<" ";
	}
*/
	x=0;
	for(b=0; b<j; b++)
    {
    	for(a=0; a<i; a++)
    	{
    		if(str[a][b]!='\0')
    		cout<<str[a][b];
		}
		cout<<" ";
	}
	return 0;
}
