#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Subsequence elemets present and in same order in string

//Recursive

bool isSubSeqR(string s1, string s2, int n,int m){
  if (m == 0){
    return true;
  }
  if (n == 0){
    return false;
  }

  if(s1[m-1] == s2[n-1]){
    return isSubSeqR(s1, s2, n-1, m-1);
  } else {
    return isSubSeqR(s1, s2, n-1, m);
  }
}


//Iterative Efficient
bool isSubSeq(string s1, string s2, int n, int m){
  int j=0;

  for(int i=0; i<n && j<m; i++){
    if(s1[i] == s2[j]){
      j++;
    }
  }

  //if subsequence then j and m will become equal
  return j == m;

}

int main(){
  int n,m;
  string s1, s2;
  cin>>n>>m;
  cout<<endl;
  cin>>s1>>s2;

  cout<<boolalpha<<isSubSeq(s1, s2, n, m);

  string str1 = "abcd";
  string str2 = "bcd";

  cout<<isSubSeq(str1, str2, 4, 3);


  return 0;
}