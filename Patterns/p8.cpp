#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j< i*2 +1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
int main(){
    solve();
    return 0;
}