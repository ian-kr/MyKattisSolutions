/**
 * Author: Ian Kristona
 * Date: 6/13/2024
 * Problem: Heart rate
 * Link: https://open.kattis.com/problems/magictrick
*/

#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cin >> s;
    bool flag = true;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(i != j && s[i] == s[j]){
                flag = false;
                break;
            }
        }
    }

    if(flag) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}