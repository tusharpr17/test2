#include<bits/stdc++.h>
using namespace std;

void e1(){
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(4);
    cout<<st.top()<<endl;
    st.emplace(43);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    stack<int> s1;
    s1.push(40);
    st.swap(s1);
    cout<<st.top();
    
}

int main(){
    e1();
    return 0;
}
