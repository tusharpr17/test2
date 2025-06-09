#include<bits/stdc++.h>
using namespace std;

// It is same as vectors. Diff is it allows front operations too. List is maintained by doubly linkedlist while vectors are maintained by singly linkedlist. Operations are less costly in list than vectors

void e1(){
    list<int> ls(2,30);
    ls.emplace_front(3);
    ls.push_front(20);

    for(auto it:ls){
        cout<<it<<" ";
    }

}

int main(){
    e1();
    return 0;
}