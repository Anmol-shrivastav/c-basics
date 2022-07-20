#include<iostream>
using namespace std;

int main()
{
    int row,column,time,i,j,k,mod;
    cin>>row>>column>>time;
    char ary[row][column];
    for(i=1; i<=row; i++)
        for(j=1; j<=column; j++)
            cin>>ary[i][j];
    if(time == 1)
    {
        for(i=1; i<row; i++)
            for(j=1; j<=column; j++)
                cout<<ary[i][j];
            cout<<"\n";
    }
    else if(time % 2 == 0)
    {
        for(i=1; i<=row; i++)
           for(j=1; j<=column; j++)
               cout<<'O';
            cout<<"\n";
    }
    else 
    {
        mod = time % 4;
        if(mod == 1)
        {
            // planting 'P' Where not 'O'
                    for(i=1; i<=row; i++) {
                        for(j=1; j<=column; j++) {
                            if(ary[i][j] != 'O') {
                                ary[i][j] = 'P';
                            }
                        }
                    }
            
                //Blast 'O'
                for(i=1; i<=row; i++)
                {
                    for(j=1; j<=column; j++)
                    {
                        if(ary[i][j]=='O')
                        {
                            if(i-1>=1 && ary[i-1][j]!='O')
                                ary[i-1][j] = '.';
                            if(i+1<=row && ary[i+1][j]!='O')
                                ary[i+1][j] = '.';
                            if(j-1>=1 && ary[i][j-1]!='O')
                                ary[i][j-1] = '.';
                            if(j+1<=column && ary[i][j+1]!='O')
                                ary[i][j+1] = '.';
                            ary[i][j] = '.';
                        }
                    }
                }
                // planting 'O' Where not 'P'
                    for(i=1; i<=row; i++) {
                        for(j=1; j<=column; j++) {
                            if(ary[i][j] != 'P') {
                                ary[i][j] = 'O';
                            }
                        }
                    }
        
                for(i=1; i<=row; i++)
                {
                    for(j=1; j<=column; j++)
                    {
                        if(ary[i][j]=='P')
                        {
                            if(i-1>=1 && ary[i-1][j]!='P')
                            ary[i-1][j] = '.';
                            if(i+1<=row && ary[i+1][j]!='P')
                            ary[i+1][j] = '.';
                            if(j-1>=1 && ary[i][j-1]!='P')
                            ary[i][j-1] = '.';
                            if(j+1<=column && ary[i][j+1]!='P')
                            ary[i][j+1] = '.';
                            ary[i][j] = '.';
                        }
                    }
                }
            }
        else if(mod == 3)
        {
            for(i=1; i<=row; i++) {
                for(j=1; j<=column; j++) {
                    if(ary[i][j] != 'O') {
                        ary[i][j] = 'P';
                    }
                }
            }
            for(i=1; i<=row; i++)
            {
                for(j=1; j<=column; j++)
                {
                    if(ary[i][j]=='O')
                    {
                        if(i-1>=1 && ary[i-1][j]!='O')
                        ary[i-1][j] = '.';
                        if(i+1<=row && ary[i+1][j]!='O')
                        ary[i+1][j] = '.';
                        if(j-1>=1 && ary[i][j-1]!='O')
                        ary[i][j-1] = '.';
                        if(j+1<=column && ary[i][j+1]!='O')
                        ary[i][j+1] = '.';
                        ary[i][j] = '.';
                    }
                }
            }
        }
        for(i=1; i<=row; i++)
            {
                for(j=1; j<=column; j++)
                {
                    if(ary[i][j]!='.')
                        cout<<'O';
                    else
                        cout<<ary[i][j];    
                }
                cout<<"\n";   
            }
    }
    return 0;
}

