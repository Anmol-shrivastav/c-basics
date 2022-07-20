//12:00 AM 11:42 PM
#include<iostream>
#include<ios>
#include<limits>
using namespace std;

bool getFirstAns(int ch,int cm,string str){
	int fh,fm;
	fh = ((str[0] - '0') * 10) + ((str[1] - '0') * 1); 
	fm = ((str[3] - '0') * 10) + ((str[4] - '0') * 1); 
	if(str[6] == 'A' && fh == 12){
		fh = 0;
	} else if(str[6] == 'P' && fh != 12){
		fh = fh + 12;
	}
	//cout<<"fh = "<<fh<<" fm = "<<fm<<"\n"; 
	if(fh > ch){
		return false;
	} else if(fh == ch && fm > cm){
		return false;
	} else {
		return true;
	}
}

bool getSecondAns(int ch,int cm,string str){
	int fh,fm;
	fh = ((str[9] - '0') * 10) + ((str[10] - '0') * 1); 
	fm = ((str[12] - '0') * 10) + ((str[13] - '0') * 1); 
	if(str[15] == 'A' && fh == 12){
		fh = 0;
	} else if(str[15] == 'P' && fh != 12){
		fh = fh + 12;
	}
	//cout<<"fh = "<<fh<<" fm = "<<fm<<"\n"; 
	if(fh < ch){
		return false;
	} else if(fh == ch && fm < cm){
		return false;
	} else {
		return true;
	}
}

int main(){
	int t,n,ch,cm,fh,fm;
	string str,temp;
	cin>>t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
	while(t--){
		getline(cin,str);
		ch = ((str[0] - '0') * 10) + ((str[1] - '0') * 1); 
		cm = ((str[3] - '0') * 10) + ((str[4] - '0') * 1); 
		if(str[6] == 'A' && ch == 12){
			ch = 0;
		} else if(str[6] == 'P' && ch != 12){
			ch = ch + 12;
		}
		//cout<<"ch = "<<ch<<" cm = "<<cm<<"\n";
		cin>>n;
		cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
		while(n--){
			getline(cin,temp);
			//cin.ignore(numeric_limits<streamsize>::max(),'\n');
			bool check = getFirstAns(ch,cm,temp);
			//cout<<"checkfirst "<<check;
			if(check){
				cout<<getSecondAns(ch,cm,temp);
			} else {
				cout<<check;
			}
		}
		cout<<"\n";
	}
	return 0;
}
