#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if((i+j)%2==0){
                cout<<" 1 ";
            }
            else{
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
}
int main(){
    solve();
    return 0;
}