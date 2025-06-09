// everything is similar to set. But it has randomized order of storing elements.

#include<bits/stdc++.h>
using namespace std;

void e1(){
    unordered_set<int> us;
    us.insert(4);
    us.insert(42);
    us.insert(41);
    us.insert(5);
    us.insert(21);
    us.insert(63);
    for(auto it:us){
        cout<<it<<" ";
    }
}

int main(){
    e1();
    return 0;
}