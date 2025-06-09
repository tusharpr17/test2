// sorted elements
//unique elements
// tree is maintained

#include<bits/stdc++.h>
using namespace std;

void e1(){
    set<int>s;
    s.insert(5);
    s.insert(25);
    s.insert(35);
    s.insert(3);
    s.insert(7);
    s.emplace(31);
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it = s.find(31);
    cout<<*it<<endl;

    s.erase(31);
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    //check existence with count
    int c = s.count(3);
    cout<<c<<endl;

    auto it1 = s.find(7);
    auto it2 = s.find(35);
    s.erase(it1,it2);
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;

}

int main(){
    e1();
    return 0;
}