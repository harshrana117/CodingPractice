#include <iostream>
#include <cmath>
using namespace std;


// //Left Rotate by D

// // i/p { 1,2,3,4,5}, d=2
// // o/p { 3,4,5,1,2}


// //Naive method: simply calling leftrotatebyone d times. Time O(nd) space O(1)

// void leftRotateByOne(int arr[], int n){
// int temp = arr[0];
// for(int i=1; i<n; i++){
//   arr[i-1] = arr[i];
// }
// arr[n-1] = temp;
// }

// void lRotateByD(int arr[], int n, int d){
//   for(int i=0; i<d; i++){
//     leftRotateByOne(arr, n);
//   } 
// }


// //Efficient approach: We store first d elemnts in temp array => shift rest by d => copy the temp array elements
//time: O(n+d) = O(n), space: O(n)


// void lRotateByD(int arr[], int n, int d){
//   int temp[d];
//   for(int i=0; i<d; i++){
//     temp[i] = arr[i];
//   }

//   for(int i=d; i<n; i++){
//     arr[i-d] = arr[i];
//   }

//   for(int i=0; i<d; i++){
//     arr[n-d+i] = temp[i];
//   }
// }


//REVERSAL METHOD: reverse first d => reverse n-d => reverse whole array
//time: O(n), space: O(1) 
void reverse(int arr[], int low, int high){
  while(low<high){
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}

void lRotateByD(int arr[], int n, int d){
  reverse(arr, 0, d-1);
  reverse(arr, d, n-1);
  reverse(arr, 0, n-1);
}



int main() {
  int arr[] = { 1,2,3,4,5}, n=5 ;
  cout<<"Before Removal"<<endl;
       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
       cout<<endl;
       lRotateByD(arr, n, 3);
       cout<<"After Removal"<<endl;
       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}