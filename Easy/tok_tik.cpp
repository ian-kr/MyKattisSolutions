/**
* @Author: Ian Kristona
* Date: 7/2/2024
* Problem: Tok Tic
* Link: https://open.kattis.com/problems/toktik
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){

  map<string,int> m;
  set<string> keys;

  int n; cin >> n;

  for(int i = 0 ; i < n; i++){
    string s; cin >> s;
    int num; cin >> num;
    m[s]+=num;
    keys.insert(s);
  }

  string res;
  int cmp = -1;

  for(auto key: keys){
    if(m[key] > cmp){
      res = key;
      cmp = m[key];
    }
  }


  cout << res;


  return 0;
}
