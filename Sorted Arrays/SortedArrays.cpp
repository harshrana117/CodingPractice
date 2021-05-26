// //CHECK SORTED ARRAY
// //Non-decreasing order


// #include <iostream>
// #include<cmath>
// using namespace std;

// //Naive method

// bool isSortedNaive(int arr[], int n)
// {
//   for(int i=0; i<n; i++)
//   {
//     for(int j=i+1; j<n; j++)
//     {
//       if(arr[j]<arr[i]){
//         return false;
//       }
//     }
//   }
//   return true;
// }

// int main() {
//   int arr[] = {7, 2, 40, 10, 20}, n = 5;
//   printf("%s", isSorted(arr, n)? "true": "false");
// }

// //Efficient method


// bool isSortedEfficient(int arr[], int n) {
//   for(int i=1; i<n; i++){
//     if(arr[i]<arr[i-1])
//     return false;
//   }
//   return true;
// }

// int main() {
//   int arr[] = {20, 40, 60, 80,100}, n=5;
//   printf("%s", isSorted(arr, n)? "true": "false");
// }