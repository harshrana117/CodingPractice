#include <iostream>
#include <cmath>
using namespace std;

//Print Frequency of elements in an sorted array

//Naive approch prints elements each loop
void frequency(int arr[], int n){
  int freq = 1;
  for(int i=0; i<n; i++){
    if(arr[i] == arr[i-1]){
      freq++;
      cout<<freq<<endl;
    }else{
      freq=1;
      cout<<freq<<endl;
    }
  }
}


//Clean approach
void printFreq(int arr[], int n){
  int freq=1, i=1;
  while (i<n){
  while(i<n && arr[i] == arr[i-1]){
    freq++;
    i++;
  }
  cout<<arr[i-1]<<" : "<<freq<<endl;
  i++;
  freq=1;
  }
  //Edge case important
  if(n==1 || arr[n-1] != arr[n-2]){
    cout<<arr[n-1]<<" : "<<1;
  }

}

int main() {
  int arr[] = { 20,20,20,30,40,50,50,50,60,60,70}, n=11;
  //frequency(arr, n);
  printFreq(arr, n);
}