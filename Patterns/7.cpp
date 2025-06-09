#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
}
int main(){
    solve();
    return 0;
}