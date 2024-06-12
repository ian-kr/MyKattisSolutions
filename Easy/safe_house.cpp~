/**
 * Date: 6/3/2024
 * Problem: Safe House
 * Link: https://open.kattis.com/problems/safehouses
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n; cin.ignore();
    vector<pair<int,int>> spies;
    vector<pair<int,int>> safeHouses;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin,s);
        for(int j = 0; j < n ; j++ ){
            if(s[j] == 'S') spies.emplace_back(make_pair(i,j));
            if(s[j] == 'H') safeHouses.emplace_back(make_pair(i,j));
        }
    }

    int res = 0;

    for(auto spy: spies){
        int greatest = 5000;
        for(auto safeHouse: safeHouses){
            int dummy = 0;
            dummy+= abs(spy.first-safeHouse.first);
            dummy+= abs(spy.second-safeHouse.second);
            greatest = min(dummy,greatest);
        }
        res= max(greatest,res);
    }

    cout << res;

    return 0;
}
