#include <iostream>
#include <cmath>
using namespace std;

//Find Majority element: Elements appearing more than n/2 times

//Naive approach: Using two for loops


//Efficient approach

int findMajority(int arr[], int n)
{
	int res = 0, count = 1;

    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;
    		else 
    			count --;

    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    	}

    	count = 0;

    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;

    	if(count <= n /2)
    		res = -1;

    	return res; 
}
int main() {
  int arr[] = {2,2,2,2,3,4,1,2,9}, n=9;
  cout<<findMajority(arr, n)<<endl;
}