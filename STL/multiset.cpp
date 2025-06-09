//only follow sorted not unique elements characterstic of set
#include<bits/stdc++.h>
using namespace std;

void e1(){
    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);

    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    ms.erase(2);// erase all 2's

    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    int c = ms.count(4);// count all 4's
    ms.erase(ms.find(4));// only delete first 4
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;

}

int main(){
    e1();
    return 0;
}