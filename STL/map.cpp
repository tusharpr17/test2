// stores in key-value pairs where key can be of any datatype
//keys are unique with sorted order.
#include<bits/stdc++.h>
using namespace std;

void e1(){
    map<int,int> m;
    map<int,pair<int,int>> m1;
    map<pair<int,int>,int>m2;
    
    //insertion
    m[3] = 2;
    m.insert({1,5});

    for(auto it:m){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    cout<<endl;

    cout<<m[1]<<endl;
    cout<<m[2]<<endl;

    auto it1 = m.find(3);
    


}

//multimap is another container which is similar to map. It can store duplicate keys also but in sorted order.

//unordered_map is another container which is similar to map but it stores elements in random order but still with unique keys.

int main(){
    e1();
    return 0;
}