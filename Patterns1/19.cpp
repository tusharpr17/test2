#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
       for(int j=0;j<i+1;j++){
        cout<<"*";
       }
       for(int j=0;j<2*(n-i-1);j++){
        cout<<" ";
       }
       for(int j=0;j<i+1;j++){
        cout<<"*";
       }

       cout<<endl;
    }
    for(int i=0;i<2*n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i-1;j++){
        cout<<"*";
       }
       for(int j=0;j<2*(i+1);j++){
        cout<<" ";
       }
       for(int j=0;j<n-i-1;j++){
        cout<<"*";
       }

       cout<<endl;
    }
    
}

int main(){
    solve();
    return 0;
}