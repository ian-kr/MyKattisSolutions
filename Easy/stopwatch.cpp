/**
 * @Author:Ian Kristona
 * Date: 6/13/2024
 * Problem: Stopwatch
 * Link: https://open.kattis.com/problems/stopwatch
 */

#include <bits/stdc++.h>

using namespace std;

int main(){


	cin.tie(0)->sync_with_stdio(0);

	int time = 0;
	int start = 0;
	bool on = false;
	int running = false;
	int n; cin >> n;

	if( n%2 == 1) {
		cout << "still running";
		running = true;
	}

	for(int i = 0; i < n ; i++){
		
		int x; cin >> x;

		if(on){
			time += x-start;
			on = false;
		}

		if(i%2 == 0){
			on = true;
			start = x;
		}

	}
	
	if(!running) cout <<  time;


	return 0;
}
