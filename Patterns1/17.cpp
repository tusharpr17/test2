#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a = 65;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            cout<<" "<<char(a+n-j-1)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    solve();
    return 0;
}