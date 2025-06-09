#include<bits/stdc++.h>
using namespace std;

void e1(){
    pair<int, int> p = {1, 4};
    cout<<p.first<<" "<<p.second;
}

void e2(){
    pair<int, pair<int,int>> p = {2,{3,5}};
    cout<<p.second.first;
}
void e3(){
    pair<int,int> arr[] = {{1,3},{2,4}};
    cout<<arr[1].second;

}

int main(){
    e3();
    return 0;
}