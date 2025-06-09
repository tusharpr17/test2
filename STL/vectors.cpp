#include<bits/stdc++.h>
using namespace std;

// e1,e2 for declaration. e3 for access. e4 for iterator
// e5,e6 for deletion
// e7 for insert
// e8 for extra functions

void e1(){
   vector<int> v;
   v.push_back(1);
   v.emplace_back(2);

   vector<pair<int,int>> vec;
   vec.push_back({1,2});
   vec.emplace_back(2,5);
}

void e2(){
    vector<int> v(5,20);
    vector<int> v1(4);
    vector<int> v2(v1);
}

void e3(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.emplace_back(6);
    cout<<v[2];
}
void e4(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.emplace_back(6);
    vector<int>::iterator it = v.begin();
    cout<<*it<<" ";
    it++;
    cout<<*it<<" ";

    vector<int>::iterator it1 = v.end();
    // vector<int>::iterator it2 = v.rend();
    // vector<int>::iterator it3 = v.rbegin();
    
    cout<<v[0]<<v.at(0)<<v.back();
    
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    
}

void e5(){
    vector<int> a;
    a.emplace_back(4);
    a.emplace_back(3);
    a.emplace_back(2);
    a.emplace_back(1);

    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int>::iterator it1 = a.begin();
    it1++;
    a.erase(a.begin());

    a.erase(it1);

    for(auto it:a){
        cout<<it<<" ";
    }


}

void e6(){
    vector<int> v;
    v.emplace_back(5);
    v.emplace_back(4);
    v.emplace_back(3);
    v.emplace_back(2);
    v.emplace_back(1);

    v.erase(v.begin()+1,v.begin()+4);
    for(auto it:v){
        cout<<it<<" ";
    }
}

void e7(){
    vector<int> v(2,50);
    v.emplace_back(20);
    v.insert(v.begin()+1,25);
    v.insert(v.begin(),2, 23);
    for(auto it:v){
        cout<<it<<" ";
    }

    vector<int> v1(2,30);
    v.insert(v.begin(),v1.begin(),v1.end());
    cout<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
}

void e8(){
    vector<int> v1(2,30);
    vector<int> v2(2,40);
    cout<<v1.size()<<endl;
    v1.swap(v2);
    cout<<v1[0]<<" "<<v2[0]<<endl;

    v1.pop_back();
    for(auto it:v1){
        cout<<it<<" ";
    } 

    cout<<endl;
    v1.clear();
    for(auto it:v1){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<v2.empty()<<endl<<v1.empty();

}



int main(){
    e8();
    return 0;
}