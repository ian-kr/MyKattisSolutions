// Ian Kristona
// 8/31/23
// Solution to Kattis problem Reverse
// https://open.kattis.com/problems/ofugsnuid
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        numbers[i] = val;
    }
    for(int i = n-1; i >= 0; i--){
        cout << numbers[i] << endl;
    }
    
    return 0;
}