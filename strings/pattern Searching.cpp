#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//pattern Searching O(n-m+1)*m Space: O(1) 
void patternSearchingN(string str, string pat){
  int m = str.length();
  int n = pat.length();

  for(int i=0; i<m-n+1; i++){
    int j=0;
    for(j=0; j<n; j++){
      if(str[i+j] != pat[j]){
        break;
      }
    }
    if(j==n){
      cout<<i<<" ";
    }
  }
}


//Pattern searching when elements are not repeated consecutively

void patternSearchingO(string str, string pat){
  int n= str.length();
  int m = pat.length();

  for(int i=0; i<n-m+1; i++){
    int j;
    for(j=0; j<m; j++){
      if(str[i+j] != pat[j]){
        break;
      }
    }
    if(j==m){
      cout<<i<<" ";
    }
    if(j<m){
      i+=j;
    }
  }

}


int main(){
  string  str = "aaabcddbcabcd";
  string pat = "abcd";
  patternSearchingN(str,"abcd");
  cout<<endl;
  patternSearchingO(str, "abcd");
return 0;
}