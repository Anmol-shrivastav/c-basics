#include<iostream>
#include<vector>
using namespace std;

    vector<int> mergeArray(vector<int>& ary1,vector<int>& ary2){
        int i = 0;
        int j = 0;
        int p = 0;
        vector<int> ary;
        while(i < ary1.size() && j < ary2.size()){
            if(ary1[i] < ary2[j]){
                ary.push_back(ary1[i]);
                i++;
            } else {
                ary.push_back(ary2[j]);
                j++;
            }
            p++;
        }
        while(i < ary1.size()){
            ary.push_back(ary1[i]);
            i++;
            p++;
        }
        while(j < ary2.size()){
            ary.push_back(ary2[j]);
            j++;
            p++;
        }
        return ary;
    }
    int main() {
    	vector<int> ary1;
		ary1.push_back(1);
		ary1.push_back(3);
    	vector<int> ary2;
    	ary2.push_back(2);
        vector<int> ans = mergeArray(ary1,ary2);
        for(int i=0; i<ans.size(); i++){
    		cout<<ans[i]<<" ";
		}
        int total = ans.size();
        if(total % 2 == 0){
            int half = (total / 2) - 1;
            int halfover = (total + 2) / 2;
            halfover--;
            double median = (1.0 * ans[half] + ans[halfover]) / 2;
            cout<<median;
        } else {
            int idx = (total + 1) / 2;
            double median = ans[idx - 1];
            cout<<median;
        }
        return 0;
    }
