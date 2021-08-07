#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Anagram string: check if permutation of orignal string

bool isAnag(string str1, string str2){
  if(str1.length() != str2.length()){
    return false;
  }

  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  return (str1 == str2);
}

//Trick used: Using string Ascii values as indexes of arrays
bool isAnagE(string str1, string str2){
  const int CHAR = 256;
  if(str1.length() != str2.length()){
    return false;
  }
  int arr[CHAR] = {0};
  for( int i=0; i<str1.length(); i++){
    arr[str1[i]]++;
    arr[str2[i]]--;
  }
  for(int i=0; i<CHAR; i++){
    if(arr[i] != 0){
      return false;
    }
  }
  return true;
}



int main(){
  string str1 = "abcdef";
  string str2 = "bacdge";

  cout<<isAnag(str1, str2)<<endl;
  cout<<isAnagE(str1, str2);
return 0;
}