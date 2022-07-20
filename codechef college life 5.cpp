#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll football[n],cricket[m];
        for(ll i=0; i<n; i++) cin>>football[i];
        for(ll i=0; i<m; i++) cin>>cricket[i];
        //Sorting
        sort(football, football+n);
        sort(cricket, cricket+m);
        string flag = "foot";
        ll i = 0, j = 0, count = 0;
        while(i<n && j<m){
            if(football[i] < cricket[j]){
            	i++;
                if(flag == "crick"){
                    flag = "foot";
                    count++;
                }
            }else{
            	j++;
                if(flag == "foot"){
                    flag = "crick";
                    count++;
                    
                }
            }
        }
        if(i+1 <= n && flag != "foot") count++;
        else if(j+1 <= m && flag != "crick") count++;
        cout<<count<<"\n";
    }
    return 0;
}
