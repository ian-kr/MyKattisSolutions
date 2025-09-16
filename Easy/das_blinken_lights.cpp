#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c; cin >>  a  >>  b  >> c;
    for(int i = 1; i <= c; i++){
        if(i%a == 0 && i%b == 0){
            cout << "yes";
            return;
        }
    }
    cout << "no";
}
int main(){

    solve();
    return 0;
}
