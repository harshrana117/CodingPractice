#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define d 256
const int q = 101;

//Rabin Karp Algorithm FOr pattern Searchng
//Time: O(quadratic) Space: constant

void RBSearch(string pat, string txt, int N, int M){

  //Compute (d^(M-1)%q)
  int h=1;
  for(int i=1; i<=M-1; i++){
    h=(h*d)%q;
  }

  //Compute p and t0
  int p=0, t=0;
  for(int i=0;i<M;i++){
    p=(p*d+pat[i])%q;
    t=(t*d+txt[i])%q;
  }

  for(int i=0;i<=(N-M);i++){
    //Checking for hit
    if(p==t){
      bool flag=true;
      for(int j=0; j<M;j++){
        if(txt[i+j] != pat[j]){flag=false;break;}
      }
      if(flag==true){
        cout<<i<<" ";
        }
    }

    //Calculating Rolling Hash i.e hash for new string as pattern in txt shifts
    if(i<N-M){
      t=((d*(t-txt[i]*h))+txt[i+M])%q;
    }
    if(t<0){
      t=t+q;
    }
  }

}


int main(){
  string txt = "geeks for geeks";
  int n=txt.length();
  string pat = "geek";
  int m = pat.length();
  RBSearch(pat, txt,n,m);

return 0;
}