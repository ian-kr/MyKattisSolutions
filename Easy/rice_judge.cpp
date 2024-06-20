/**
 * @Author: Ian Kristona
 * Date: 6/19/2024
 * Problem: Rice Judge
 * Link: https://open.kattis.com/problems/risdomare
 */

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

struct bowl{

	ll portion;
	ll nanosize;
	ll sum;
	ll index;

};

int main(void){

	cin.tie(0)->sync_with_stdio(0);
	
	ll n; cin >> n;

	string s; cin >> s;

	vector<bowl> bowls(n);

	ll largest = 0;

	for(ll i = 0 ; i < n; i++){
		cin >> bowls[i].portion >> bowls[i].nanosize;
		bowls[i].sum = bowls[i].portion * bowls[i].nanosize;
		largest = max(largest,bowls[i].sum);
		bowls[i].index = i+1;
	}

	bowl res = bowls[0];

	for(ll i = 0 ; i < n; i++){
		if(bowls[i].sum == largest){
			if("antal" == s && bowls[i].portion > res.portion){
				res = bowls[i];
			}
			if("storlek" == s && bowls[i].nanosize > res.nanosize){
				res = bowls[i];
			}	
		}
	}

	cout << res.index << endl;

	return 0;
}
