#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ascii = 65;
    for(int i=0;i<n;i++){
        char ch= char(ascii+i);
        for(int j=0;j<i+1;j++){
            cout<<" "<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    solve();
    return 0;
}