#include<iostream>
using namespace std;
int main()
{
    long long int n,o,qr,qc,up,down,right,left,upleft,upright,downleft,downright,o_r,oc,i;
    cin>>n>>o>>qr>>qc;
    up = qr-1;
    down = n-qr;
    left = qc-1;
    right = n-qc;
    upleft = up<=left ? up:left;
    upright = up<=right ? up:right;
    downleft = down<=left ? down:left;
    downright = down<=right ? down:right;
    
    for(i=0; i<o; i++)
    {
        cin>>o_r>>oc;
        if(o_r == qr && oc<qc)
        {
           if(qc-oc-1<left)
              left = qc-oc-1;
        }   
        else if(o_r == qr && oc>qc)
        {
           if(oc-qc-1<right)
              right = oc-qc-1;
        }
        else if(oc==qc && o_r<qr)
        {
           if(qr-o_r-1<up)
               up = qr-o_r-1;
        }   
        else if(oc==qc && o_r>qr)
        {
            if(o_r-qr-1<down)
               down = o_r-qr-1;
        }      
        else if(o_r<qr && oc<qc)
        {
            if(qr-o_r==qc-oc)
               if(qr-o_r-1<upleft)
                  upleft = qr-o_r-1;
        }     
        else if(o_r>qr && oc<qc)
        {
            if(o_r-qr==qc-oc)
               if(o_r-qr-1<downleft)
                  downleft = o_r-qr-1;
        }    
        else if(qr>o_r && qc<oc)
        {
            if(qr-o_r==oc-qc)
               if(qr-o_r-1<upright)
                  upright = qr-o_r-1;
        }   
        else if(qr<o_r && qc<oc)
        {
            if(o_r-qr==oc-qc)
               if(o_r-qr-1<downright)
                  downright = o_r-qr-1;
        }      
    } 
        cout<<up+down+left+right+upleft+upright+downleft+downright;
    return 0;
}

