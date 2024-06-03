/**
 * @Author: Ian Kristona
 * Date: 6/2/2024
 * Problem: Bridging Signals
 * Link: https://open.kattis.com/problems/signals
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){

  int p; cin >> p;
  int res = 1;

  vector<int> vec;
  for(int i = 0 ; i < p; i++){
    int n; cin >> n;
    vec.push_back(n);
  }

  for(int i = 0; i < p; i++){
    int notCrossing = 1;
    for(int j = 0; j < p; j++){
      if(vec[j] > vec[i] && j>i){
        cout << i << " did not cross " << j << ' ';
        notCrossing++;
      }
      else if (vec[j] < vec[i] && j<i){
        cout << i << " did not cross " << j << ' ';
        notCrossing++;
      }
    }
    res = max(res,notCrossing);
    cout << endl;
  }

  cout << res << endl;

  return 0;
}
