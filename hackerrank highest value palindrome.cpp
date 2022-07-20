#include<iostream>
using namespace std;

int isPalindrome(string str,int i,int n,int count){
    while(i < n){
        if(str[i] != str[n]){
            count+=2;
        }
        i++;
        n--;
    }
    return count;
}

int main(){
    int n,k,i,j;
    string str;
    cin>>n>>k>>str;
    int count = isPalindrome(str,0,n-1,0);
    //cout<<count;
    if(count == 0){
        if(k % 2 != 0){
            k-=1;
        }
        i = 0;
        n--;
        while(k > 0 && i < n){
            if(str[i] != '9'){
                str[i] = str[n] = '9';
                k--;
            }
            i++;
            n--;
        }
    } else if(count > 2*k){
        str = "-1";
    } else if(count == 2*k){
        i = 0;
        n--;
        while(i < n){
            if(str[i] != str[n]){
                if(str[i] < str[n]){
                    str[i] = str[n];
                } else{
                    str[n] = str[i];
                }
            }
            i++;
            n--;
        }
    } else if(2*k > count){
        i = 0;
        n--;
        while(2*k > count){
            while(i < n){
                i++;
                n--;
                if(str[i] != str[n]){
                    if()
                }
            }
            k--;
        }
    }
    cout<<str;
    return 0;
}
