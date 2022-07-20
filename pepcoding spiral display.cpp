#include<iostream>
using namespace std;
int main(){
	int i,ru,rd,lu,ld,r,c;
	cin>>r>>c;
	ru = 0;
	rd = c-1;
	lu = 0;
	ld = r-1;
	int ary[r][c];
	int count = 0;
	for(i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>ary[i][j];
		}
	}
	while(count < r*c){
		for(i=lu; i<=ld && count < r*c; i++){
			cout<<i<<" "<<lu<<"\n";
			//cout<<ary[i][lu]<<"\n";
			count++;
		}
		ld = ld - 1;
		lu = lu + 1;
		for(i=lu; i<=rd && count < r*c; i++){
			cout<<ld+1<<" "<<i<<"\n";
			//cout<<ary[ld+1][i]<<"\n";
			count++;
		}
		for(i=rd-1; i>=ru && count < r*c; i--){
			cout<<i<<" "<<ld+1<<"\n";
			//cout<<ary[i][ld+1]<<"\n";
			count++;
		}
		rd = rd - 1;
		ru = ru + 1;
		for(i=ld; i>=lu && count < r*c; i--){
			cout<<ru-1<<" "<<i<<"\n";
			//cout<<ary[ru-1][i]<<"\n";
			count++;
		}
	}
	return 0;
}
/*
5 5
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44
*/
