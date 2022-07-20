#include<iostream>
 #include<vector>
 using namespace std;
 // -----------------------------------------------------
 // This is a functional problem. Only this function has to be written.
 // This function takes as an integer array and an integer
 // It should return the required output
 int findTargetSumWays(vector<int>& nums,int ans, int S) {
     //Write your code here
     if(ans == S){
         return 1;
     }
     int count = 0;
     for(int i=0; i<nums.size(); i++){
         count+=findTargetSumWays(nums,nums[i]+ans,S);
         count+=findTargetSumWays(nums,(-1*nums[i])+ans,S);
     }
     return count;
 }
 
 
 int main(int argc,char** argv){
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i=0;i<n;i++){
         cin>>nums[i];
     }
     int S;
     cin>>S;
     cout<<findTargetSumWays(nums,0,S)<<endl;
 }
