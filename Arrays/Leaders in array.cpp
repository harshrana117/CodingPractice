#include <iostream>
#include <cmath>
using namespace std;

// Learders in an array: 
// i/p: {2,4,1,9,5,2,1};
//o/p: 1,2,5,9


//Naive method: Using two for loops
// Time: O(n^2)


//Efficient method: Traversing the loop from rear
//Time: O(n) space: O(n)

int leaders(int arr[], int n){
  int count = 1;
  int currentLeader = arr[n-1];
  cout<<currentLeader<<endl;
  for(int i=n-2; i>=0; i--){
    if(arr[i] > currentLeader){
      count++;
      currentLeader = arr[i];
      cout<<arr[i]<<endl;
    }
  }
  return count;
}

int main() {
  int arr[] = {2,4,1,9,5,7,2,4,1}, n=9;
  int a =leaders(arr, n);
  cout<<"Number of leaders: "<<a;
}