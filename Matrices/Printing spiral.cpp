#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Printing boundary elements from matrix
const int r=4, c=4;

void spiralTraversal(int mat[r][c]){
  int top = 0, topRight = c-1, bottomRight = r-1, bottomLeft = 0;
  while(top <= bottomRight && bottomLeft <= topRight){

    for(int i=bottomLeft; i<=topRight; i++ ){
      cout<<mat[top][i]<<" ";
    }

    top++;
    for( int i=top; i<=bottomRight; i++ ){
      cout<<mat[i][topRight]<<" ";
    }
    topRight--;

    if(top <= bottomRight){
      for(int i=bottomRight; i>=bottomLeft; i--){
      cout<<mat[bottomRight][i]<<" ";
    }
    bottomRight--;
    }
    
    if(bottomLeft <= topRight){
      for(int i=bottomRight; i>=top; i--){
      cout<<mat[i][bottomLeft]<<" ";
    }
    bottomLeft++;
    }
  }
}


const int R = 4, C = 4;

void printSpiral(int mat[4][4], int R, int C)
{
	int top = 0, left = 0, bottom = R - 1, right = C - 1;

	while(top <= bottom && left <= right)
	{
		for(int i = left; i <= right; i++)
			cout << mat[top][i] << " ";

		top++;

		for(int i = top; i <= bottom; i++)
			cout << mat[i][right] << " " ;
		
		right--;

		if(top <= bottom){
		for(int i = right; i >= left; i--)
			cout << mat[bottom][i] << " ";

		bottom--;
		}

		if(left <= right){
		for(int i = bottom; i >= top; i--)
			cout << mat[i][left] << " ";

		left++;
		}			
	}
}


int main () {
  int mat[r][c] = {{1,2,3, 4},{5,6,7,8}, {9,10,11,12},{13,14,15,16}};
  spiralTraversal(mat);
  cout<<endl;
  printSpiral(mat, R,C);
  return 0;
}