#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Reverse a sentence 
// Ex: "Hello World" => "World Hello"

void reverse(string str, int low, int high){
  while(low<=high){
    swap(str[low], str[high]);
    high++;
    low--;
  }
}

void reverseSentence(string str){
  int start = 0;

  for(int end=0; end<str.length(); end++){
    if(str[end] == ' '){
      reverse(str, start, end-1);
      start = end+1;
    }
  }
  reverse(str, start, str.length()-1);
  reverse(str, 0, str.length()-1);
}

int main(){
  string str1 = "abcdefdab";
  string str2 = "bacdge";

  reverseSentence(str1);
  cout<<str1;

return 0;
}