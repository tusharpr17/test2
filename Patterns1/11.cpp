#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    solve();
    return 0;
}