#include<iostream>
using namespace std;
int main(){
	int row,col,i,j;
	cin>>row>>col;
	int ary[row][col];
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cin>>ary[i][j];
		}
	}
	i = j = 0;
	string dir = "rr";   //rr == row right
	int temp = INT_MAX;
	while(temp--){
		if(dir == "rr"){
			if(ary[i][j] == 0){
				if(j+1 >= col){
					cout<<i<<"\n"<<j;
					break;
				}else{
					j++;
				}
			}else{
				if(i+1 >= row){
					cout<<i<<"\n"<<j;
					break;
				}else{
					i++;
					dir = "cd";   //cd == column down
				}
			} 
		}else if(dir == "rl"){     // rl == row left
			if(ary[i][j] == 0){
				if(j-1 < 0){
					cout<<i<<"\n"<<j;
					break;
				}else{
					j--;
				}
			}else{
				if(i-1 < 0){
					cout<<i<<"\n"<<j;
					break;
				}else{
					i--;
					dir = "cu";
				}
			}
		}else if(dir == "cu"){      // cu == column up
			if(ary[i][j] == 0){
				if(i-1 < 0){
					cout<<i<<"\n"<<j;
					break;
				}else{
					i--;
				}
			}else{
				if(j+1 >= col){
					cout<<i<<"\n"<<j;
					break;
				}else{
					j++;
					dir = "rr";
				}
			}
		}else if(dir == "cd"){     // cd == column down
			if(ary[i][j] == 0){
				if(i+1 >= row){
					cout<<i<<"\n"<<j;
					break;
				}else{
					i++;
				}
			}else{
				if(j-1 < 0){
					cout<<i<<"\n"<<j;
					break;
				}else{
					j--;
					dir = "rl";
				}
			}
		}
		//cout<<"row = "<<i<<" col = "<<j<<" dir -> "<<dir<<"\n";
	}
	return 0;
}
