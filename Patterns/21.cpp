#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int a = min(i,min(j,min((2*n-2)-i,(2*n-2)-j)));
            int b = n-a;
            cout<<" "<<b<<" "; 
        }
        cout<<endl;
        
       
    }
}
int main(){
    solve();
    return 0;
}