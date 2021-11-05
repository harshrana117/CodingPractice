#include <iostream>
#include<queue>
using namespace std;

int main(){
  //Max Heap
    priority_queue <int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<" ";
    cout<<pq.top()<<" ";
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    //Min Heap
    priority_queue <int,vector<int>,greater<int>> pqr;
    pqr.push(10);
    pqr.push(15);
    pqr.push(5);
    cout<<pqr.size()<<" ";
    cout<<pqr.top()<<" ";
    while(pqr.empty()==false){
        cout<<pqr.top()<<" ";
        pqr.pop();
    }
    
    return 0;
}