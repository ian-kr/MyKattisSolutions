/**
 * @Author: Ian Kristona
 * Date:  6/13/2024
 * Problem: Parking
 * Link: https://open.kattis.com/problems/parking
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	int a,b,c;
	cin >> a >> b >> c;	
	int end_time = 0;
	vector<pair<int,int>> times;
		
	for(int i = 0; i < 3; i++){
	
		int s,e;
		cin >> s >> e;
		end_time = max(end_time,e);
		times.emplace_back(make_pair(s,e));	
	}


	int res = 0;


	for(int k = 1 ; k <= end_time; k++) {

		int cars = 0;
		for(int i = 0 ; i < 3; i++){
			if(times[i].first <= k && times[i].second > k) cars++; 	
		}
		

		if(cars == 1) res += a;
		if(cars == 2) res += b*2;
		if(cars == 3) res += c*3;

	}

	cout << res;

	return 0;
}
