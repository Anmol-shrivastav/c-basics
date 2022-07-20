#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k,l,m,n,r1,c1,r2,c2;
    string str = "NO";
    cin>>t;
    while(t--)
    {
        cin>>r1>>c1;
        char g[r1][c1];
        for(i=0; i<r1; i++)
            for(j=0; j<c1; j++)
                cin>>g[i][j];
        cin>>r2>>c2;
        char p[r2][c2];
        for(i=0; i<r2; i++)
            for(j=0; j<c2; j++)
                cin>>p[i][j];
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                if(p[0][0]==g[i][j] && j+c2<=c1 && i+r2<=r1)
                {
                    for(m=0,k=i; m<r2; m++,k++)
                    {
                        for(n=0,l=j; n<c2; n++,l++)
                        {
                            if(p[m][n]!=g[k][l])
                            break;
                        }
                        if(n!=c2)
                        break;
                    }
                    if(m==r2)
                    str = "YES";
                }
                if(str == "YES")
                break;
            }
            if(str == "YES")
            break;
        }
        cout<<str<<"\n";
        str="NO";
    }
    return 0;
}
