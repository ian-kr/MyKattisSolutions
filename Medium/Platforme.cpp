/**
 * Author: Ian Kristona
 * Date: 6/2/2024
 * Problem: Platforme
 * Link: https://open.kattis.com/problems/platforme
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct platform {
    int h,l,r;
};

bool cmp(platform lhs, platform rhs) {
    return lhs.h < rhs.h;
}

int main(void){

    int n; cin >> n;
    
    vector<int> ground;
    ground.resize(10001,0);
    vector<platform> vec;

    for(int i = 0; i < n; i++){
        platform p;
        cin >> p.h >> p.l >> p.r;
        p.r--;
        vec.push_back(p);
    }

    sort(vec.begin(), vec.end(), cmp);

    int res = 0;

    for(auto j:vec){
        res += j.h - ground[j.l];
        res += j.h - ground[j.r];

        for(int i = j.l; i <= j.r; i++){
            ground[i] = j.h;
        }
    }

    cout << res << endl;

    return 0;
}