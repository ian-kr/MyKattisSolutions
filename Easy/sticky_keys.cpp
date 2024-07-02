#include <bits/stdc++.h>

using namespace std;

int main(void){


  string s;
  getline(cin,s);

  string res = "";
  char last = s[0];
  res.push_back(last);

  for(int i = 1; i < s.size();i++){
    if(last != s[i]){
      res+= s[i];
    }
    last = s[i];
  }

  cout << res;


  return 0;
}
