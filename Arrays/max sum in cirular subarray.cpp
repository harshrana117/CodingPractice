#include <iostream>
#include <cmath>
using namespace std;

//Maximum circular subarray sum


//Naive approach
int maxCircularSum(int arr[], int n){
  int res = arr[0];
  for(int i=0; i<n; i++){
    int currentMax = arr[i];
    int currSum = arr[i];
    for(int j=1; j<n; j++){
      int index = (i +j)%n;
      currSum += arr[index];
      //checks for max in current loop
      currentMax = max(currentMax, currSum);
    }
    //checks for overall max
    res = max(res, currentMax);
  }
  return res;
}



//Efficient approach
//time: O(3N) = O(N)

//function to find maximum
int normalMaxSum(int arr[], int n){
  int res=0, maxEnding = arr[0];
  for(int i=1; i<n; i++){
    maxEnding = max(maxEnding+arr[i], arr[i]);
    res = max(res, maxEnding);
  }
  return res;
}

//Reverses sign of each element in array => finds it's maximum
//max of negative elements array is min of initial array
// then substracts from total sum of initial array
//if it is all -ve array then this fails so covered separately in if condition.
int overallMaxSum( int arr[], int n){
  //if all -ve then return max from that;
  int max_Normal = normalMaxSum(arr, n);
  if(max_Normal < 0)
    return max_Normal;
    
  int arr_sum = 0;
  for(int i=0; i<n; i++){
    arr_sum += arr[i];
    arr[i] = -arr[i];
  }
  int max_circular = arr_sum + normalMaxSum(arr, n);
  return max(max_Normal, max_circular);
}

int main() {
  int arr[] = {1,2,3,4,-2,6,7,-9}, n=8;
  cout<<maxCircularSum(arr, n)<<endl;
  cout<<overallMaxSum(arr, n)<<endl;


}