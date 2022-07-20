#include<iostream>
#include<vector>
using namespace std;

int floodFill(int sr,int sc,int er,int ec,vector< vector<int> > &ary,int dir[][2],string dirS[],int n,int m,string ans){
	if(sr == er && sc == ec){
		cout<<ans;
		return 1;
	}
	ary[sr][sc] = 1;
	int count = 0;
	for(int i=0; i<4; i++){
		int r = sr + dir[i][0];
		int c = sc + dir[i][1];
		if(r>=0 && r<m && c>=0 && c<n && ary[r][c] == 0){
			count+=floodFill(r,c,er,ec,ary,dirS,n,m,ans+dirS[i]);
		}
	}
	ary[sr][sc] = 0;
	return count;
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> > ary(n);
	int dir[4][2] = { {-1,0},
	                  {0,-1},
	                  {1,0},
					  {0,1}	                 
	                }
    string dirS[4] = {"t","l","d","r"};
    
	for(int i=0; i<n; i++){
		ary[i].assign(m,0);
		for(int j=0; j<m; j++){
			cin>>ary[i][j];
		}
	}
	floodFill(0,0,n-1,m-1,ary,dir,dirS,n,m,"");
	return 0;
}
