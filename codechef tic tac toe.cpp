#include<iostream>
#include<limits>
#include<ios>
#include<math.h>
using namespace std;

char ary[3][3];

bool isWinner(char ch){
	int count = 0, i,j;
	//	left to right Diagonal
	for(i=0; i<3; i++){
		if(ary[i][i] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"left to right Diagonal"<<"\n";
		return true;
	} 
	count = 0;
	//Right to left diagonal
	for(i=0,j=2; i<3; i++,j--){
		if(ary[i][j] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"Right to left diagonal"<<"\n";
		return true;
	} 
	count = 0;
	//Up Boundery
	for(i=0,j=0; j<3; j++){
		if(ary[i][j] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"Up Boundery"<<"\n";
		return true;
	} 
	count = 0;
	//Down Boundery
	for(i=2,j=0; j<3; j++){
		if(ary[i][j] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"Down Boundery"<<"\n";
		return true;
	} 
	count = 0;
	//right boundery
	for(i=0,j=2; i<3; i++){
		if(ary[i][j] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"right boundery"<<"\n";
		return true;
	} 
	count = 0;
	//Left Boundery
	for(i=0,j=0; i<3; i++){
		if(ary[i][j] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"Left Boundery"<<"\n";
		return true;
	} 
	count = 0;
	//vertical middle
	for(i=0,j=1; i<3; i++){
		if(ary[i][j] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"vertical middle"<<"\n";
		return true;
	} 
	count = 0;
	//Horizontal middle
	for(i=1,j=0; j<3; j++){
		if(ary[i][j] == ch) count++;
		else break;
	}
	if(count == 3){
		//cout<<"Horizontal middle"<<"\n";
		return true;
	} 
	
	return false;
}

int isEmpty(){
	int space = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(ary[i][j] == '_') space++;
		}
	}
	return space;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n=3,i,j;
	cin>>t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	int fre[26] = {0};
	while(t--){
		fre[14] = fre[23] = 0;
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				cin>>ary[i][j];
				fre[ary[i][j] - 'A']++;
			}
		}
		bool xIsWinner = isWinner('X');
		bool oIsWinner = isWinner('O');
		int space = isEmpty();
		//cout<<"O = "<<fre[14]<<" X ="<<fre[23]<<"\n";
		//cout<<"xIsWinner = "<<xIsWinner<<" oIsWinner = "<<oIsWinner<<" isSpace = "<<isSpace<<"\n";
		if((xIsWinner && oIsWinner) || (abs(fre[14] - fre[23]) > 1) || (fre[14] > fre[23])) cout<<"3"<<"\n";
		else if(xIsWinner || oIsWinner){
			if(xIsWinner){
				if(fre[23] > fre[14]) cout<<"1"<<"\n";
				else cout<<"3"<<"\n";
			}else{
				if(fre[23] <= fre[14]) cout<<"1"<<"\n";
				else cout<<"3"<<"\n";
			}
		}else if(space == 0){
			if(fre[23]==5 && fre[14]==4) cout<<"1"<<"\n";
			else cout<<"3"<<"\n";
		}else{
			if(space%2==0){
				if(fre[23] > fre[14]) cout<<"2"<<"\n";
				else cout<<"3"<<"\n";
			}else{
				if(fre[23] == fre[14]) cout<<"2"<<"\n";
				else cout<<"3"<<"\n";
			}
		} 
	}
	return 0;
}
