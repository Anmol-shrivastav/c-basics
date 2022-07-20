//  if man was meant to stay on the ground god would have given us roots
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k=0,count=0,row,column;
    string str;
    getline(cin,str);
    for(i=0; i<str.size(); i++)
    {
    	if(str[i] !=' ')
    	   count++;
	}
	row = floor(sqrt(count));
	column = ceil(sqrt(count));
	if(row*column<count)
	row++;
	char ary[row][column];

	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
	    {
	    	if(k<str.size()-1 && str[k]==' ')
	    	   k++;
	    	if(k<str.size() && str[k]!=' ')
	    		ary[i][j] = str[k];
	    	else if(k>=str.size())
	    	     ary[i][j] = '\0';
	    		k++;
	    }
	}
	    
	for(i=0; i<column; i++)
	{
		for(j=0; j<row; j++)
		{
			if(ary[j][i]!='\0')
			cout<<ary[j][i];
		}
		cout<<" ";
	}

	return 0;
}
