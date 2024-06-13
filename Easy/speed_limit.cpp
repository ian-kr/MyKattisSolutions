/**
 * @Author: Ian Kristona
 * Date:6/13/2024
 * Problem: Speed Limit
 * Link: https://open.kattis.com/problems/speedlimit
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	cin.tie(0)->sync_with_stdio(0);

	int n;
	while(cin >> n){
		if(n == -1) break;
		int res = 0;
		int time = 0;
		for(int i = 0 ;i < n ; i++){
			int m,t; cin >> m >> t;
			res += m*(t-time);
			time = t;
		}
		cout << res << " miles\n";
	}

	return 0;
}
