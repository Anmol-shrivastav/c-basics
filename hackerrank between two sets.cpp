#include<iostream>
using namespace std;
int HCF(int ary[], int n){
    int div, dive;
    for(int i=0; i<n; i++){
        if(i == 0){
            div = ary[i]; dive = ary[i+1];
            i += 1;
        }else{
            div = ary[i];
        }
        
        while(div != 0){
            int rem = dive % div;
            dive = div;
            div = rem;
        }
    }
    return dive;
}

int LCM(int ary[], int n){
    int hcf = HCF(ary, n);
    cout<<hcf<<"\n";
    int pro = 1;
    for(int i=0; i<n; i++)    pro *= ary[i];
    return pro / hcf;
}

bool isTrue(int ary1[], int n, int ary2[], int m, int num){
    for(int i=0; i<n; i++) if(num % ary1[i] != 0) return false;
    
    for(int i=0; i<m; i++) if(ary2[i] % num != 0) return false;
    
    return true;
}
int main(){
    int n, m;
    cin>>n>>m;
    int ary1[n], ary2[m];
    for(int i=0; i<n; i++){
        cin>>ary1[i];
    }
    for(int i=0; i<m; i++){
        cin>>ary2[i];
    }
    int lcm = LCM(ary1, n);
    int hcf = HCF(ary2, m);
    cout<<lcm<<" "<<hcf<<"\n";
    int count = 0;
    for(int i=lcm; i<=hcf; i+=lcm){
        bool check = isTrue(ary1,n,ary2,m,i);
        if(check) count++;
    }
    cout<<count;
    return 0;
}
