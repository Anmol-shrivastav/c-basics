#include<iostream>
using namespace std;
int main(){
    long long n,m,score[999999],adam[999999],x=1,j,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>score[i];
    cin>>m;
    for(i=0;i<m;i++)
    cin>>adam[i];
    long long a[999999],k=0;
    for(i=0;i<n-1;i++){
        if(score[i]!=score[i+1])
{  a[k]=score[i];
       k++;}   }
    a[k++] = score[i];
    j=k-1;
    for(i=0;i<m;i++){
        for(;j>=0;j--){
            if(adam[i]<a[j]){
                x=j+2;
                break;
            }
            else if(adam[i]==a[j]){
                x=j+1;
                break;
            }
    }cout<<x<<endl;
    x = 1;
    
}
}
