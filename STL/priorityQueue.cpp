#include<bits/stdc++.h>
using namespace std;

//tree datastructure is used
// largest stays on top
//e1 for maxHeap
//e2 for minHeap

void e1(){
    priority_queue<int> pq;
    pq.push(4);
    pq.push(3);
    pq.push(10);
    pq.push(90);
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}

void e2(){
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(4);
    pq.push(3);
    pq.push(10);
    pq.push(90);
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}

int main(){
    e1();
    e2();
    return 0;
}