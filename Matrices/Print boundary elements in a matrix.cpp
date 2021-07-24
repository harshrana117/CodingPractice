#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Printing boundary elements from matrix
const int r=4, c=4;

void boundaryElements(int mat[r][c]){
  if(r==1){
    for(int i=0; i<c; i++){
      cout<<mat[r][i]<<" ";
    }}
    else if(c == 1){
    for(int i=0; i<r; i++){
      cout<<mat[i][c]<<" ";
    }}
    else {
      for(int i=0; i<c; i++){
        cout<<mat[0][i]<<" ";
      }
      for(int i=1; i<r; i++){
        cout<<mat[i][c-1]<<" ";
      }
      for(int i=c-2; i>=0; i--){
        cout<<mat[r-1][i]<<" ";
      }
      for(int i=r-2; i>0; i--){
        cout<<mat[i][0]<<" ";
      }
    }
}


int main () {
  int mat[r][c] = {{1,2,3, 4},{5,6,7,8}, {9,10,11,12},{13,14,15,16}};
  boundaryElements(mat);
  return 0;
}