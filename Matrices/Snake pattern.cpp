#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Printing snake pattern from matrix
const int r=4, c=4;

void printSnake(int mat[r][c]){
  for(int i=0; i<r; i++){
    if(i%2==0){
      cout<<endl;
      for(int j=0; j<r; j++){
        cout<<mat[i][j]<< " ";
      }
    } else {
      cout<<endl;
      for(int j=c-1; j>=0; j--){
        cout<<mat[i][j]<< " ";
      }
    }
  }
}

int main () {
  int mat[r][c] = {{1,2,3, 4},{5,6,7,8}, {9,10,11,12},{13,14,15,16}};
  printSnake(mat);
  return 0;
}