#include <bits/stdc++.h>
using namespace std;
 
// Function to find the maximum alternating
// sum of a subarray for the given array
int alternatingSum(int arr[],int n)
{
  int sum = 0;
  int sumSoFar = 0;

  for (int i = 0; i < n; i++) {

    if (i % 2 == 1) {
 
      sumSoFar -= arr[i];
    }
    else {
 
      sumSoFar = max(
        sumSoFar + arr[i], arr[i]);
    }

    sum = max(sum, sumSoFar);
  }
 
  sumSoFar = 0;
 
  for (int i = 1; i < n; i++) {

    if (i % 2 == 0) {
      sumSoFar -= arr[i];
    }
    else {
      sumSoFar = max(
        sumSoFar + arr[i], arr[i]);
    }
 
    sum = max(sum, sumSoFar);
  }
  return sum;
}
 
// Driver code
int main()
{
 
  // Given Input
  int arr[] ={ -1,2,-1,4,7 };
  int n = sizeof(arr)/sizeof(arr[0]);
   
  // Function call
  int ans = alternatingSum(arr,n);
 
  cout<<ans<<endl;
  return 0;
}
 
