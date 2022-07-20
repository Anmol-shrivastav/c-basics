#include<iostream>
using namespace std;
int main(){
	int r,c,m=0,n=0,i,j;
	cin>>r>>c;
	int ary[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cin>>ary[i][j];
		}
	}
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			//cout<<ary[m][n]<<"\n";
			cout<<ary[m][n]<<" M-> "<<m<<" N-> "<<n<<"\n";
			if(i % 2 == 0){
				m++;
			} else {
				m--;
			}
		}
		if(i % 2 == 0){
			m--;
			n++;
		} else {
			n++;
			m++;
		}
	}
	return 0;
}
