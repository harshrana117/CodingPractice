#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPal(string str)
{
  string rev = str;
  reverse(rev.begin(), rev.end());
  return(rev == str);
}

bool isPalE( string str){
  int begin = 0;
  int end = str.length() -1;
  while(begin < end){
    if(str[begin] != str[end])
      return false;
    begin++;
    end--;
  }
  return true;
}

int main(){
  string str = "abccbha";
  cout<<isPal(str);

}