#include<bits/stdc++.h>
using namespace std;

//Also similar as list and vectors

void e1(){
    deque<int>dq(3,40);
    dq.push_back(30);
    dq.emplace_front(39);
    for(auto it:dq){
        cout<<it<<" ";
    }
}

int main(){
    e1();
    return 0;
}