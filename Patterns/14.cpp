#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ascii = 65;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i+1;j++){
            char ch = char(ascii+j);
            cout<<" "<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    solve();
    return 0;
}