#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Left most repeating character


//O(n^2) time, O(1) space
int lRepeat(string str){
  int n = str.length();

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if (str[i] == str[j]){
        return i;
        break;
      }
    }
  }
  return -1;
}

//O(n) time, O(CHAR) constant space
int lRepeatE(string str){
  int n = str.length();
  int arr[256] = {0};
  for(int i=0; i<n; i++){
    arr[str[i]]++;
  }

  for(int i=0; i<n; i++){
    if(arr[str[i]]>1){
      return i;
      break;
    }
  }
  return -1;
}


// int lRepeatE2(string str){
//   int n = str.length();
//   int arr[256] = {0};
//   int result = n+1;
//   for(int i=0; i<n; i++){
//     if(arr[str[i]]>1){
//       result = min(result, arr[str[i]]);
//     }
//     arr[str[i]]++;
//   }
//   cout<<result<<endl;
//   if(result<n+1 && result>=0){
//     return result;
//   }
//   return -1;
// }



int main(){
  string str1 = "abcdefd";
  string str2 = "bacdge";

  cout<<lRepeat(str1)<<endl;
  cout<<lRepeatE(str1)<<endl;
return 0;
}