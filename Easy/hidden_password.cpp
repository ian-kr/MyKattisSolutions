/**
 * @Author: Ian Kristona
 * Date: 6/13/2024
 * Problem: Hidden Password
 * Link: https://open.kattis.com/problems/hidden
 */

#include <bits/stdc++.h>

using namespace std;

vector<string> tolkenize(const string& s){
	vector<string> res;

	string dummy = "";
	for(int i = 0 ; i < s.size(); i++){
		if(s[i] == ' '){
			res.push_back(dummy);
			dummy = "";
		}
		else{
			dummy.push_back(s[i]);
		}
	}
	res.push_back(dummy);
	return res;
}

int main(){

	string s;
	getline(cin,s);
	
	set<char> hidden;
	vector<string> vec = tolkenize(s);

	for( auto c: vec[0]){
		hidden.insert(c);
	}


	for( auto c: vec[1]){
		if(hidden.count(c) != 0){
		hidden.erase(c);
		}
	}

	if(hidden.size() == 0) cout << "PASS" << endl;
	else cout << "FAIL" << endl;
	
	

	return 0;

}
