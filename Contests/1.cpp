#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    if(s.length()%2==1){
      cout<<"NO";
    }
    int a, b=0;
    for(int i=0; i<s.length(); i++){
      if(s[i]=='B'){
        a++;
      } else{
        b++;
      }
    }
    if(a!=s.length()/2 || b!=s.length()/2){
      cout<<"NO";
    } else{
      cout<<"YES";
    }
  }
  return 0;
}