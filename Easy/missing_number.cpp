/**
 * @Author: Ian Kristona
 * Date: 6/13/2024
 * Problem: Missing Numbers
 * Link: https://open.kattis.com/problems/heartrate
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,s;
	cin >> n;

	set<int> numbers;
	set<int> said;

	while(n--){
		int num;
		cin >> num;
		said.insert(num);
		s = num;
	}

	for(int i = 1; i <= s; i++){
		numbers.insert(i);
	}

	for(auto n: said){
		numbers.erase(n);
	}

	for(auto n: numbers){
		cout << n << endl;
	}

	if(numbers.size() == 0) cout << "good job" << endl;
	return 0;

}
