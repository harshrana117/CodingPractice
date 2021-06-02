#include <iostream>
#include <cmath>
using namespace std;

//Window sliding technique

//Maximum sum of K consecutive elements

int maxSum(int arr[], int n, int k){
  int sum =0;
  for(int i=0; i<k; i++){
    sum += arr[i];
  }
  int res = sum;
  for(int i = k; i<n; i++){
    sum = sum + arr[i] - arr[i-k];
    res = max(sum, res);
  }
  return res;
}

//Subarray with given sum

int givenSum(int arr[], int n, int sum){
  int curr_sum = arr[0], start = 0;

  for(int i=1;i<=n; i++){
    while(curr_sum > sum ){
      curr_sum -= arr[start];
      start++;
    }

    if(curr_sum == sum){
      printf("Sum found b/w indexes %d and %d", start, i-1);

      return true;
    }

    if(i<n){
      curr_sum = curr_sum + arr[i];
    }
  }
  cout<<"No subarray found"<<endl;
  return 0;

}

int main(){
  int arr[] = {2,3,1,5,3,7,6,9,8,4,3}, n=11;
  cout<<maxSum(arr, n, 4)<<endl;
  cout<<givenSum(arr, n, 30)<<endl;
}