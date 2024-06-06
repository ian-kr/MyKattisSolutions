/**
* @Author: Ian Kristona
* Date:6/5/2024
* Problem: Dragon Maid
* Link: https://open.kattis.com/problems/dragonmaid
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){

  // Fast I/O
  cin.tie(0)->sync_with_stdio(0);
  
  // N items
  int n; cin >> n;
  
  vector<pair<int,pair<int,int>>> items(n);
  
  int index = 1;
  for(auto &p: items){
      cin >> p.first >> p.second.first;
      p.second.second = index;
      index++;
  }


  int q; cin >> q;

  while(q--){

   int x,k; cin >> x >> k;
   vector<pair<int,pair<int,int>>> bugget;

   for(auto p: items)
      if(p.second.first <= x)
          bugget.emplace_back(p);

    sort(bugget.begin(), bugget.end());

    if(!bugget.size())
        cout << -1;
    else 
        for(int i = 0; i < k && i < bugget.size(); i++)
            cout << bugget[i].second.second << ' ';

    cout << '\n';
    }
    

  return 0;
}
