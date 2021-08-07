#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Left most non repeating character


// //O(n^2) time, O(1) space
// int lNonRepeat(string str1){
//   int n=str1.length();
//   bool flag = false;
//   for(int i=0; i<n;i++){
//     for(int j=i+1; j<n; j++){
//       if(str1[i] == str1[j]){
//         flag = true;
//         break;
//       }
//     }
//     if(flag == false){
//       return i;
//     }
//   }
//   return -1;
// }

//O(n) time, O(CHAR) constant space 2 traversals
int lNonRepeatingE(string str1){
  int n = str1.length();
  int arr[256];
  fill(arr, arr+256, 0);
  for(int i=0; i<n; i++){
    arr[str1[i]]++;
  }
  for(int i=0; i<n; i++){
    if(arr[str1[i]] == 1){
      return i;
    }
  }
  return -1;
}


//O(n) time, O(CHAR) constant space 1 traversal
int lNonRepeatingE2(string str1){
  int arr[256];
  fill(arr, arr+256, -1);
  int n = str1.length();
  for(int i=0; i<n; i++){
    if(arr[str1[i]] == -1){
      arr[str1[i]] = i;
    } else {
      arr[str1[i]] = -2;
    }
  }
  int res = 257;
  for(int i=0; i<256; i++){
    if(arr[i]>=0){
      res = min(res, arr[i]);
    }
  }
  return (res == 257) ? -1 : res;
}



int main(){
  string str1 = "abcdefdab";
  string str2 = "bacdge";

  // cout<<lNonRepeat(str1)<<endl;
  cout<<lNonRepeatingE(str1)<<endl;
  cout<<lNonRepeatingE2(str1)<<endl;

return 0;
}\