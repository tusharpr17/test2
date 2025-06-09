#include<bits/stdc++.h>
using namespace std;

void e1(){
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front();
}

int main(){
    e1();
    return 0;
}