#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define d 256
const int q = 101;

//Circular String: Check wether string is rotated or not

bool isRotated(string str1, string str2){
  if(str1.length() != str2.length()){
    return false;
  }
  return ((str1+str1).find(str2)!=string::npos);
  }


int main()
{
  string str1 = "Harsh Rana";
  string str2 = "samurai";
  string str3 = "abcde";
  string str4 = "raisamu";
  cout<<(str2+str2)<<endl;
  bool a = ((str2+str2).find(str3)!=string::npos);
  cout<<a;
return 0;
}