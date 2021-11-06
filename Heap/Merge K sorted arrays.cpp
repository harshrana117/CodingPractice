#include <iostream>
#include<queue>
using namespace std;

//Node of minHeap contains (value, arrayPosition(aPos), valuePosition(vPos))
struct Triplet{
  int val, aPos, vPos;
  Triplet(int v, int ap, int vp){
    val = v; aPos = ap; vPos=vp;
  }
};

//Comparision function for custom minHeap
struct myComp{
  bool operator()(Triplet &t1, Triplet &t2){
    return t1.val > t2.val;
  }
};

vector<int> mergeArr(vector <vector<int>> &arr){ //2d array vector
  vector<int> res;
  //passing comparision function in custom data type(struct) priority queue
  priority_queue<Triplet, vector<Triplet>, myComp> pq; //Custom minHeap
  
  for(int i=0; i<arr.size(); i++){
    Triplet t(arr[i][0], i, 0);
     //Inserting first element of K sorted arrays in minHeap
    pq.push(t);
  }

  while (pq.empty()==false){
    //Now popping elements and inserting new elements from array in minHeap
    //When array becomes empty minHeap decreases in size(k, k-1, k-1,...0) and becomes empty then while loop ends
    Triplet curr = pq.top(); 
    pq.pop();
    res.push_back(curr.val); //Popping and pushing top element of minHeap in res array
    int ap = curr.aPos; int vp=curr.vPos;
    if(vp+1<arr[ap].size()){
      Triplet t(arr[ap][vp+1], ap, vp+1);
      pq.push(t);
    }
  }
  return res;
}

int main()
{

	vector<vector<int> > arr{ { 10, 20, 30 }, 
                              { 5, 15 }, 
                              { 1, 9, 11, 18 } }; 
  
    vector<int> res=mergeArr(arr);  
    cout << "Merged array is " << endl; 
    for (auto x : res) 
        cout << x << " "; 
  
    return 0; 
}


//Note 
//Naive method 1:
//Put all elements of different arrays in one res[] array and then sorted

//Naive method 2:(Using Merge Sort)
//Copy 1st array in res[] => Merge sort for remaining arrays into res[]