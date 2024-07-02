/**
* @Author: Ian Kristona
* Date: 5/2/2024
* Problem: Triple Texting
* Link: https://open.kattis.com/contests/yq8zqs/problems/tripletexting
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){

  string s;
  getline(cin,s);

  int n = s.size();
  int div = n/3;

  set<string> words;
  string dummy = "";

  for(int i = 1; i <= n; i++){
      dummy += s[i-1];
      if(i%div==0){
        if(words.count(dummy)){
          cout << dummy;
          return 0;
        }
        words.insert(dummy);
        dummy = "";
      }
  }

  cout << "FAIL";

  return 0;
}
