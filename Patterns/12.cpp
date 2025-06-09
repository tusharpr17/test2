#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<" "<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
int main(){
    solve();
    return 0;
}