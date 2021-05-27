#include <iostream>
#include <cmath>
using namespace std;

//Move all zeroes at the end, keeping rest of the order same

// i/p {5,10,0,0,4,0,2}
// o/p {5,10,4,2,0,0,0}

//Naive approach

void moveZeros( int arr[], int n)
{
  int count = 0;
  for (int i=0; i<n; i++){
    if(arr[i] == 0){
      for (int j=i+1; j<n; j++){
        if(arr[j] != 0){
          swap(arr[i], arr[j]);
        }
      }
    }
  }
}

//Efficient approach

void moveZerosEfficient( int arr[], int n)
{
  int count = 0;
  for (int i=0; i<n; i++){
//we do nothing if it is 0, we only keep record of non-zero elements

    if(arr[i] != 0){
      swap(arr[i], arr[count]);
      count++;
    }
  }
}


int main() {
  int arr[] = { 1,2,0,0,4,5,9,0}, n=8;
   cout<<"BEFORE"<<endl;
   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"After"<<endl;
   moveZerosEfficient(arr, n);
   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
}